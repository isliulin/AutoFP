/***********************************************************
 * File generated by the HALCON-Compiler hcomp version 11.0
 * Usage: Interface to C++
 *
 * Software by: MVTec Software GmbH, www.mvtec.com
 ***********************************************************/


#ifndef HCPP_HOCRKNN
#define HCPP_HOCRKNN

namespace HalconCpp
{

// Represents an instance of a k-NearestNeighbor OCR classifier.
class LIntExport HOCRKnn : public HToolBase
{

public:

  // Create an uninitialized instance
  HOCRKnn():HToolBase() {}

  // Copy constructor
  HOCRKnn(const HOCRKnn& source) : HToolBase(source) {}

  // Create HOCRKnn from handle, taking ownership
  explicit HOCRKnn(Hlong handle);

  // Set new handle, taking ownership
  void SetHandle(Hlong handle);

  // Deep copy of all data represented by this object instance
  HOCRKnn Clone() const;



/*****************************************************************************
 * Operator-based class constructors
 *****************************************************************************/

  // read_ocr_class_knn: Read an OCR classifier from a file.
  explicit HOCRKnn(const HString& FileName);

  // read_ocr_class_knn: Read an OCR classifier from a file.
  explicit HOCRKnn(const char* FileName);

  // create_ocr_class_knn: Create an OCR classifier using a k-Nearest Neighbor (k-NN) classifier.
  explicit HOCRKnn(Hlong WidthCharacter, Hlong HeightCharacter, const HString& Interpolation, const HTuple& Features, const HTuple& Characters, const HTuple& GenParamNames, const HTuple& GenParamValues);

  // create_ocr_class_knn: Create an OCR classifier using a k-Nearest Neighbor (k-NN) classifier.
  explicit HOCRKnn(Hlong WidthCharacter, Hlong HeightCharacter, const HString& Interpolation, const HString& Features, const HTuple& Characters, const HTuple& GenParamNames, const HTuple& GenParamValues);

  // create_ocr_class_knn: Create an OCR classifier using a k-Nearest Neighbor (k-NN) classifier.
  explicit HOCRKnn(Hlong WidthCharacter, Hlong HeightCharacter, const char* Interpolation, const char* Features, const HTuple& Characters, const HTuple& GenParamNames, const HTuple& GenParamValues);




  /***************************************************************************
   * Operators                                                               *
   ***************************************************************************/

  // Classify a related group of characters with an OCR classifier.
  HTuple DoOcrWordKnn(const HRegion& Character, const HImage& Image, const HString& Expression, Hlong NumAlternatives, Hlong NumCorrections, HTuple* Confidence, HString* Word, double* Score) const;

  // Classify a related group of characters with an OCR classifier.
  HString DoOcrWordKnn(const HRegion& Character, const HImage& Image, const HString& Expression, Hlong NumAlternatives, Hlong NumCorrections, double* Confidence, HString* Word, double* Score) const;

  // Classify a related group of characters with an OCR classifier.
  HString DoOcrWordKnn(const HRegion& Character, const HImage& Image, const char* Expression, Hlong NumAlternatives, Hlong NumCorrections, double* Confidence, HString* Word, double* Score) const;

  // Deserialize a serialized k-NN-based OCR classifier.
  void DeserializeOcrClassKnn(const HSerializedItem& SerializedItemHandle);

  // Serialize a k-NN-based OCR classifier.
  HSerializedItem SerializeOcrClassKnn() const;

  // Read an OCR classifier from a file.
  void ReadOcrClassKnn(const HString& FileName);

  // Read an OCR classifier from a file.
  void ReadOcrClassKnn(const char* FileName);

  // Write a k-NN classifier for an OCR task to a file.
  void WriteOcrClassKnn(const HString& FileName) const;

  // Write a k-NN classifier for an OCR task to a file.
  void WriteOcrClassKnn(const char* FileName) const;

  // Clear all OCR classifiers.
  static void ClearAllOcrClassKnn();

  // Create an OCR classifier using a k-Nearest Neighbor (k-NN) classifier.
  void CreateOcrClassKnn(Hlong WidthCharacter, Hlong HeightCharacter, const HString& Interpolation, const HTuple& Features, const HTuple& Characters, const HTuple& GenParamNames, const HTuple& GenParamValues);

  // Create an OCR classifier using a k-Nearest Neighbor (k-NN) classifier.
  void CreateOcrClassKnn(Hlong WidthCharacter, Hlong HeightCharacter, const HString& Interpolation, const HString& Features, const HTuple& Characters, const HTuple& GenParamNames, const HTuple& GenParamValues);

  // Create an OCR classifier using a k-Nearest Neighbor (k-NN) classifier.
  void CreateOcrClassKnn(Hlong WidthCharacter, Hlong HeightCharacter, const char* Interpolation, const char* Features, const HTuple& Characters, const HTuple& GenParamNames, const HTuple& GenParamValues);

  // Trains an k-NN classifier for an OCR task.
  void TrainfOcrClassKnn(const HTuple& TrainingFile, const HTuple& GenParamNames, const HTuple& GenParamValues) const;

  // Trains an k-NN classifier for an OCR task.
  void TrainfOcrClassKnn(const HString& TrainingFile, const HTuple& GenParamNames, const HTuple& GenParamValues) const;

  // Trains an k-NN classifier for an OCR task.
  void TrainfOcrClassKnn(const char* TrainingFile, const HTuple& GenParamNames, const HTuple& GenParamValues) const;

  // Compute the features of a character.
  HTuple GetFeaturesOcrClassKnn(const HImage& Character, const HString& Transform) const;

  // Compute the features of a character.
  HTuple GetFeaturesOcrClassKnn(const HImage& Character, const char* Transform) const;

  // Classify multiple characters with an k-NN classifier.
  HTuple DoOcrMultiClassKnn(const HRegion& Character, const HImage& Image, HTuple* Confidence) const;

  // Classify multiple characters with an k-NN classifier.
  HString DoOcrMultiClassKnn(const HRegion& Character, const HImage& Image, double* Confidence) const;

  // Classify a single character with an OCR classifier.
  HTuple DoOcrSingleClassKnn(const HRegion& Character, const HImage& Image, const HTuple& NumClasses, const HTuple& NumNeighbors, HTuple* Confidence) const;

  // Classify a single character with an OCR classifier.
  HString DoOcrSingleClassKnn(const HRegion& Character, const HImage& Image, const HTuple& NumClasses, const HTuple& NumNeighbors, double* Confidence) const;

  // Select an optimal combination of features to classify OCR data.
  HTuple SelectFeatureSetTrainfKnn(const HTuple& TrainingFile, const HTuple& FeatureList, const HString& SelectionMethod, Hlong Width, Hlong Height, const HTuple& GenParamNames, const HTuple& GenParamValues, HTuple* Score);

  // Select an optimal combination of features to classify OCR data.
  HTuple SelectFeatureSetTrainfKnn(const HString& TrainingFile, const HString& FeatureList, const HString& SelectionMethod, Hlong Width, Hlong Height, const HString& GenParamNames, double GenParamValues, HTuple* Score);

  // Select an optimal combination of features to classify OCR data.
  HTuple SelectFeatureSetTrainfKnn(const char* TrainingFile, const char* FeatureList, const char* SelectionMethod, Hlong Width, Hlong Height, const char* GenParamNames, double GenParamValues, HTuple* Score);

  // Return the parameters of an OCR classifier.
  void GetParamsOcrClassKnn(Hlong* WidthCharacter, Hlong* HeightCharacter, HString* Interpolation, HTuple* Features, HTuple* Characters, HString* Preprocessing, Hlong* NumTrees) const;

  // Return the parameters of an OCR classifier.
  void GetParamsOcrClassKnn(Hlong* WidthCharacter, Hlong* HeightCharacter, HString* Interpolation, HString* Features, HTuple* Characters, HString* Preprocessing, Hlong* NumTrees) const;

};

class LIntExport HOCRKnnArray : public HToolArray
{
public:
  HOCRKnnArray();
  HOCRKnnArray(HOCRKnn* classes, Hlong length);
protected:
  virtual void CreateArray(Hlong length);
};

}

#endif
