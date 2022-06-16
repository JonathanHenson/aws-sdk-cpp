﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshiftserverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshiftserverless/model/Namespace.h>
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
  class AWS_REDSHIFTSERVERLESS_API UpdateNamespaceResult
  {
  public:
    UpdateNamespaceResult();
    UpdateNamespaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateNamespaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of tag instances.</p>
     */
    inline const Namespace& GetNamespace() const{ return m_namespace; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline void SetNamespace(const Namespace& value) { m_namespace = value; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline void SetNamespace(Namespace&& value) { m_namespace = std::move(value); }

    /**
     * <p>A list of tag instances.</p>
     */
    inline UpdateNamespaceResult& WithNamespace(const Namespace& value) { SetNamespace(value); return *this;}

    /**
     * <p>A list of tag instances.</p>
     */
    inline UpdateNamespaceResult& WithNamespace(Namespace&& value) { SetNamespace(std::move(value)); return *this;}

  private:

    Namespace m_namespace;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
