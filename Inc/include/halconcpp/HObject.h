/***********************************************************
 * File generated by the HALCON-Compiler hcomp version 11.0
 * Usage: Interface to C++
 *
 * Software by: MVTec Software GmbH, www.mvtec.com
 ***********************************************************/


#ifndef HCPP_HOBJECT
#define HCPP_HOBJECT

namespace HalconCpp
{

// Represents an instance of an iconic object(-array). Base class for images, regions and XLDs
class LIntExport HObject : public HObjectBase
{

public:

  // Create an uninitialized instance
  HObject():HObjectBase() {}

  // Copy constructor
  HObject(const HObject& source) : HObjectBase(source) {}

  // Create HObject from object id. For copy=false takes
  // over management of input key. Type of key must match!
  explicit HObject(Hkey key, bool copy=true);

  // Access of object tuple element
  const HObject operator [] (Hlong index) const;

  // Deep copy of all data represented by this object instance
  HObject Clone() const;




  /***************************************************************************
   * Operators                                                               *
   ***************************************************************************/

  // Calculate the difference of two object tuples.
  HObject ObjDiff(const HObject& ObjectsSub) const;

  // Convert an "integer number" into an iconic object.
  void IntegerToObj(const HTuple& SurrogateTuple);

  // Convert an "integer number" into an iconic object.
  void IntegerToObj(void* SurrogateTuple);

  // Convert an iconic object into an "integer number."
  HTuple ObjToInteger(Hlong Index, Hlong Number) const;

  // Copy an iconic object in the HALCON database.
  HObject CopyObj(Hlong Index, Hlong NumObj) const;

  // Concatenate two iconic object tuples.
  HObject ConcatObj(const HObject& Objects2) const;

  // Select objects from an object tuple.
  HObject SelectObj(const HTuple& Index) const;

  // Select objects from an object tuple.
  HObject SelectObj(Hlong Index) const;

  // Compare image objects regarding equality.
  Hlong TestEqualObj(const HObject& Objects2) const;

  // Number of objects in a tuple.
  Hlong CountObj() const;

  // Informations about the components of an image object.
  HTuple GetChannelInfo(const HString& Request, const HTuple& Channel) const;

  // Informations about the components of an image object.
  HString GetChannelInfo(const HString& Request, Hlong Channel) const;

  // Informations about the components of an image object.
  HString GetChannelInfo(const char* Request, Hlong Channel) const;

  // Name of the class of an image object.
  HTuple GetObjClass() const;

  // Create an empty object tuple.
  void GenEmptyObj();

  // Displays image objects (image, region, XLD).
  void DispObj(const HWindow& WindowHandle) const;

  // Deserialize a serialized iconic object.
  void DeserializeObject(const HSerializedItem& SerializedItemHandle);

  // Serialize an iconic object.
  HSerializedItem SerializeObject() const;

private:

  // Verify matching semantic type ('object')!
  void AssertObjectClass();

};

}

#endif
