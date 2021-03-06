/***********************************************************
 * File generated by the HALCON-Compiler hcomp version 11.0
 * Usage: Interface to C++
 *
 * Software by: MVTec Software GmbH, www.mvtec.com
 ***********************************************************/


#ifndef HCPP_HNCCMODEL
#define HCPP_HNCCMODEL

namespace HalconCpp
{

// Represents an instance of an NCC model for matching.
class LIntExport HNCCModel : public HToolBase
{

public:

  // Create an uninitialized instance
  HNCCModel():HToolBase() {}

  // Copy constructor
  HNCCModel(const HNCCModel& source) : HToolBase(source) {}

  // Create HNCCModel from handle, taking ownership
  explicit HNCCModel(Hlong handle);

  // Set new handle, taking ownership
  void SetHandle(Hlong handle);

  // Deep copy of all data represented by this object instance
  HNCCModel Clone() const;



/*****************************************************************************
 * Operator-based class constructors
 *****************************************************************************/

  // read_ncc_model: Read an NCC model from a file.
  explicit HNCCModel(const HString& FileName);

  // read_ncc_model: Read an NCC model from a file.
  explicit HNCCModel(const char* FileName);

  // create_ncc_model: Prepare an NCC model for matching.
  explicit HNCCModel(const HImage& Template, const HTuple& NumLevels, double AngleStart, double AngleExtent, const HTuple& AngleStep, const HString& Metric);

  // create_ncc_model: Prepare an NCC model for matching.
  explicit HNCCModel(const HImage& Template, Hlong NumLevels, double AngleStart, double AngleExtent, double AngleStep, const HString& Metric);

  // create_ncc_model: Prepare an NCC model for matching.
  explicit HNCCModel(const HImage& Template, Hlong NumLevels, double AngleStart, double AngleExtent, double AngleStep, const char* Metric);




  /***************************************************************************
   * Operators                                                               *
   ***************************************************************************/

  // Deserialize an NCC model.
  void DeserializeNccModel(const HSerializedItem& SerializedItemHandle);

  // Serialize an NCC model.
  HSerializedItem SerializeNccModel() const;

  // Read an NCC model from a file.
  void ReadNccModel(const HString& FileName);

  // Read an NCC model from a file.
  void ReadNccModel(const char* FileName);

  // Write an NCC model to a file.
  void WriteNccModel(const HString& FileName) const;

  // Write an NCC model to a file.
  void WriteNccModel(const char* FileName) const;

  // Determine the parameters of an NCC model.
  static HTuple DetermineNccModelParams(const HImage& Template, const HTuple& NumLevels, double AngleStart, double AngleExtent, const HString& Metric, const HTuple& Parameters, HTuple* ParameterValue);

  // Determine the parameters of an NCC model.
  static HTuple DetermineNccModelParams(const HImage& Template, Hlong NumLevels, double AngleStart, double AngleExtent, const HString& Metric, const HString& Parameters, HTuple* ParameterValue);

  // Determine the parameters of an NCC model.
  static HTuple DetermineNccModelParams(const HImage& Template, Hlong NumLevels, double AngleStart, double AngleExtent, const char* Metric, const char* Parameters, HTuple* ParameterValue);

  // Return the parameters of an NCC model.
  Hlong GetNccModelParams(double* AngleStart, double* AngleExtent, double* AngleStep, HString* Metric) const;

  // Return the origin (reference point) of an NCC model.
  void GetNccModelOrigin(double* Row, double* Column) const;

  // Set the origin (reference point) of an NCC model.
  void SetNccModelOrigin(double Row, double Column) const;

  // Find the best matches of an NCC model in an image.
  void FindNccModel(const HImage& Image, double AngleStart, double AngleExtent, double MinScore, Hlong NumMatches, double MaxOverlap, const HString& SubPixel, const HTuple& NumLevels, HTuple* Row, HTuple* Column, HTuple* Angle, HTuple* Score) const;

  // Find the best matches of an NCC model in an image.
  void FindNccModel(const HImage& Image, double AngleStart, double AngleExtent, double MinScore, Hlong NumMatches, double MaxOverlap, const HString& SubPixel, Hlong NumLevels, HTuple* Row, HTuple* Column, HTuple* Angle, HTuple* Score) const;

  // Find the best matches of an NCC model in an image.
  void FindNccModel(const HImage& Image, double AngleStart, double AngleExtent, double MinScore, Hlong NumMatches, double MaxOverlap, const char* SubPixel, Hlong NumLevels, HTuple* Row, HTuple* Column, HTuple* Angle, HTuple* Score) const;

  // Set selected parameters of the NCC model.
  void SetNccModelParam(const HTuple& GenParamNames, const HTuple& GenParamValues) const;

  // Prepare an NCC model for matching.
  void CreateNccModel(const HImage& Template, const HTuple& NumLevels, double AngleStart, double AngleExtent, const HTuple& AngleStep, const HString& Metric);

  // Prepare an NCC model for matching.
  void CreateNccModel(const HImage& Template, Hlong NumLevels, double AngleStart, double AngleExtent, double AngleStep, const HString& Metric);

  // Prepare an NCC model for matching.
  void CreateNccModel(const HImage& Template, Hlong NumLevels, double AngleStart, double AngleExtent, double AngleStep, const char* Metric);

};

class LIntExport HNCCModelArray : public HToolArray
{
public:
  HNCCModelArray();
  HNCCModelArray(HNCCModel* classes, Hlong length);
protected:
  virtual void CreateArray(Hlong length);
};

}

#endif
