﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/Policy.h>
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
namespace Organizations
{
namespace Model
{
  class UpdatePolicyResult
  {
  public:
    AWS_ORGANIZATIONS_API UpdatePolicyResult();
    AWS_ORGANIZATIONS_API UpdatePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API UpdatePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains details about the updated policy, showing the
     * requested changes.</p>
     */
    inline const Policy& GetPolicy() const{ return m_policy; }

    /**
     * <p>A structure that contains details about the updated policy, showing the
     * requested changes.</p>
     */
    inline void SetPolicy(const Policy& value) { m_policy = value; }

    /**
     * <p>A structure that contains details about the updated policy, showing the
     * requested changes.</p>
     */
    inline void SetPolicy(Policy&& value) { m_policy = std::move(value); }

    /**
     * <p>A structure that contains details about the updated policy, showing the
     * requested changes.</p>
     */
    inline UpdatePolicyResult& WithPolicy(const Policy& value) { SetPolicy(value); return *this;}

    /**
     * <p>A structure that contains details about the updated policy, showing the
     * requested changes.</p>
     */
    inline UpdatePolicyResult& WithPolicy(Policy&& value) { SetPolicy(std::move(value)); return *this;}

  private:

    Policy m_policy;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
