﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshiftserverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshiftserverless/model/Workgroup.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace RedshiftServerless
{
namespace Model
{
  class AWS_REDSHIFTSERVERLESS_API UpdateWorkgroupResult
  {
  public:
    UpdateWorkgroupResult();
    UpdateWorkgroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateWorkgroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated workgroup object.</p>
     */
    inline const Workgroup& GetWorkgroup() const{ return m_workgroup; }

    /**
     * <p>The updated workgroup object.</p>
     */
    inline void SetWorkgroup(const Workgroup& value) { m_workgroup = value; }

    /**
     * <p>The updated workgroup object.</p>
     */
    inline void SetWorkgroup(Workgroup&& value) { m_workgroup = std::move(value); }

    /**
     * <p>The updated workgroup object.</p>
     */
    inline UpdateWorkgroupResult& WithWorkgroup(const Workgroup& value) { SetWorkgroup(value); return *this;}

    /**
     * <p>The updated workgroup object.</p>
     */
    inline UpdateWorkgroupResult& WithWorkgroup(Workgroup&& value) { SetWorkgroup(std::move(value)); return *this;}

  private:

    Workgroup m_workgroup;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
