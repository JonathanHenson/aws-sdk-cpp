/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/waf/model/ComparisonOperator.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int EQ_HASH = HashingUtils::HashString("EQ");
static const int NE_HASH = HashingUtils::HashString("NE");
static const int LE_HASH = HashingUtils::HashString("LE");
static const int LT_HASH = HashingUtils::HashString("LT");
static const int GE_HASH = HashingUtils::HashString("GE");
static const int GT_HASH = HashingUtils::HashString("GT");

namespace Aws
{
namespace WAF
{
namespace Model
{
namespace ComparisonOperatorMapper
{


ComparisonOperator GetComparisonOperatorForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EQ_HASH)
  {
     return ComparisonOperator::EQ;
  }
  else if (hashCode == NE_HASH)
  {
     return ComparisonOperator::NE;
  }
  else if (hashCode == LE_HASH)
  {
     return ComparisonOperator::LE;
  }
  else if (hashCode == LT_HASH)
  {
     return ComparisonOperator::LT;
  }
  else if (hashCode == GE_HASH)
  {
     return ComparisonOperator::GE;
  }
  else if (hashCode == GT_HASH)
  {
     return ComparisonOperator::GT;
  }
  return ComparisonOperator::NOT_SET;
}

Aws::String GetNameForComparisonOperator(ComparisonOperator enumValue)
{
  switch(enumValue)
  {
  case ComparisonOperator::EQ:
    return "EQ";
  case ComparisonOperator::NE:
    return "NE";
  case ComparisonOperator::LE:
    return "LE";
  case ComparisonOperator::LT:
    return "LT";
  case ComparisonOperator::GE:
    return "GE";
  case ComparisonOperator::GT:
    return "GT";
  default:
    return "";
  }
}

} // namespace ComparisonOperatorMapper
} // namespace Model
} // namespace WAF
} // namespace Aws
