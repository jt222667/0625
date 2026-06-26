/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_calc_MCG_0625_info.c
 *
 * Code generation for function 'calc_MCG_0625'
 *
 */

/* Include files */
#include "_coder_calc_MCG_0625_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void);

/* Function Definitions */
static const mxArray *c_emlrtMexFcnResolvedFunctionsI(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[7] = {
      "789ced58cd6e125114fe68d0b8d08a1b571afb02d6028550174d0885b62a8ad292a6a274"
      "bc5c3a63e78f9981002fe1cabdefe1a66fe14637c6adf115bc303fd0"
      "696e00878c81cc21e1ccb9df99f9eebd67e69b9341ecb01c03b00edb720f6c7fc789138e"
      "5fc355f3e331c7dff0c5f0c6e357ce73f14f8e279a6ad19e6507aaa0",
      "50efcca6a648aaa05a477d9dc2a0a62677697384b424991e490aad4e062f8791529a80bc"
      "60080d8f0b222517d58e024334c7339427036f3fce38eb8d4fd90fbf"
      "f9f7c39fe7f2e9ffc817f38df3f85c9c083269940bfb8dad6c2a83e0eb75f96e72f96dc4"
      "b48c0eb1c67c9701f91e73f8ee39fed4f16f51c43b94f01475e46180",
      "4084842e2836f0a641c43ab690450a1986efa10f1502149641584cd8b1ccfe1b28a3807d"
      "e6dddc4d9663dbb4fdbb3be37afc7e9c7f6be43fc77fc4c2e47bb8fe"
      "2b11269f6bff8bafc7b9deacf7e37d0e5fc2871b7a5fef4b5572b12d0e449a3e3db65ed3"
      "41693c8fca149e69f300270eebfa979cf397f5b90eaacbb739eb49f8",
      "f0912e0b42632b9dcc4df29f05e40f5b9737397c6efdea8e9fa77ecf19a232446175b3ae"
      "d55060bf6105d34822e755302c1d89fffe1eaa2eff3c2f7e0b93cfb5"
      "55d7e5d68b4ab673983a79b59d57855a81c8e76da37610e9f2b23dd7b3ae67cd17c3cbb3"
      "1132c042f9a6e97053eb7c90e998ef4b40be471c3eb75ebb8e9fa75e",
      "076c54666fc46195064e45565567ff6cec453a8bc5ebac5428b64fcae56719d2a969c92e"
      "f9a8927cb318e9ecaaf6bf737d97d035d36d8097b5ff7dc2e173ebf7"
      "def18b7b4fead0605e7b53aeaa2e7fd54a912e63f1ba2c48ad8ada13abc59d92725c4bef"
      "d4ccb65489be4b2cdd731df5bfb645fd6f30bea8ffb52dea7f67bbfe",
      "5f5dbd3284",
      ""};
  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 7248U, &nameCaptureInfo);
  return nameCaptureInfo;
}

mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xEntryPoints;
  mxArray *xInputs;
  mxArray *xResult;
  const char_T *epFieldName[7] = {
      "QualifiedName",    "NumberOfInputs", "NumberOfOutputs", "ConstantInputs",
      "ResolvedFilePath", "TimeStamp",      "Visible"};
  const char_T *propFieldName[7] = {
      "Version",      "ResolvedFunctions", "Checksum", "EntryPoints",
      "CoverageInfo", "IsPolymorphic",     "AuxData"};
  uint8_T v[216] = {
      0U,   1U,   73U,  77U,  0U,   0U,   0U,   0U,   14U,  0U,   0U,   0U,
      200U, 0U,   0U,   0U,   6U,   0U,   0U,   0U,   8U,   0U,   0U,   0U,
      2U,   0U,   0U,   0U,   0U,   0U,   0U,   0U,   5U,   0U,   0U,   0U,
      8U,   0U,   0U,   0U,   1U,   0U,   0U,   0U,   1U,   0U,   0U,   0U,
      1U,   0U,   0U,   0U,   0U,   0U,   0U,   0U,   5U,   0U,   4U,   0U,
      17U,  0U,   0U,   0U,   1U,   0U,   0U,   0U,   17U,  0U,   0U,   0U,
      67U,  108U, 97U,  115U, 115U, 69U,  110U, 116U, 114U, 121U, 80U,  111U,
      105U, 110U, 116U, 115U, 0U,   0U,   0U,   0U,   0U,   0U,   0U,   0U,
      14U,  0U,   0U,   0U,   112U, 0U,   0U,   0U,   6U,   0U,   0U,   0U,
      8U,   0U,   0U,   0U,   2U,   0U,   0U,   0U,   0U,   0U,   0U,   0U,
      5U,   0U,   0U,   0U,   8U,   0U,   0U,   0U,   1U,   0U,   0U,   0U,
      0U,   0U,   0U,   0U,   1U,   0U,   0U,   0U,   0U,   0U,   0U,   0U,
      5U,   0U,   4U,   0U,   14U,  0U,   0U,   0U,   1U,   0U,   0U,   0U,
      56U,  0U,   0U,   0U,   81U,  117U, 97U,  108U, 105U, 102U, 105U, 101U,
      100U, 78U,  97U,  109U, 101U, 0U,   77U,  101U, 116U, 104U, 111U, 100U,
      115U, 0U,   0U,   0U,   0U,   0U,   0U,   0U,   80U,  114U, 111U, 112U,
      101U, 114U, 116U, 105U, 101U, 115U, 0U,   0U,   0U,   0U,   72U,  97U,
      110U, 100U, 108U, 101U, 0U,   0U,   0U,   0U,   0U,   0U,   0U,   0U};
  xEntryPoints =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&epFieldName[0]);
  xInputs = emlrtCreateLogicalMatrix(1, 4);
  emlrtSetField(xEntryPoints, 0, "QualifiedName",
                emlrtMxCreateString("calc_MCG_0625"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs",
                emlrtMxCreateDoubleScalar(4.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs",
                emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(
      xEntryPoints, 0, "ResolvedFilePath",
      emlrtMxCreateString(
          "F:\\Archive "
          "\xe5\xbd\x92\xe6\xa1\xa3\\0625\\Dynamic\\calc_MCG_0625.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp",
                emlrtMxCreateDoubleScalar(740158.80806712958));
  emlrtSetField(xEntryPoints, 0, "Visible", emlrtMxCreateLogicalScalar(true));
  xResult =
      emlrtCreateStructMatrix(1, 1, 7, (const char_T **)&propFieldName[0]);
  emlrtSetField(xResult, 0, "Version",
                emlrtMxCreateString("25.2.0.3042426 (R2025b) Update 1"));
  emlrtSetField(xResult, 0, "ResolvedFunctions",
                (mxArray *)c_emlrtMexFcnResolvedFunctionsI());
  emlrtSetField(xResult, 0, "Checksum",
                emlrtMxCreateString("AYRecUkcpAwNJq8PhcuqCC"));
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  emlrtSetField(xResult, 0, "AuxData",
                emlrtMxCreateRowVectorUINT8((const uint8_T *)&v, 216U));
  return xResult;
}

/* End of code generation (_coder_calc_MCG_0625_info.c) */
