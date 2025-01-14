﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/QueryLoggingConfig.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{
  class ListQueryLoggingConfigsResult
  {
  public:
    AWS_ROUTE53_API ListQueryLoggingConfigsResult();
    AWS_ROUTE53_API ListQueryLoggingConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListQueryLoggingConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An array that contains one <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_QueryLoggingConfig.html">QueryLoggingConfig</a>
     * element for each configuration for DNS query logging that is associated with the
     * current Amazon Web Services account.</p>
     */
    inline const Aws::Vector<QueryLoggingConfig>& GetQueryLoggingConfigs() const{ return m_queryLoggingConfigs; }

    /**
     * <p>An array that contains one <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_QueryLoggingConfig.html">QueryLoggingConfig</a>
     * element for each configuration for DNS query logging that is associated with the
     * current Amazon Web Services account.</p>
     */
    inline void SetQueryLoggingConfigs(const Aws::Vector<QueryLoggingConfig>& value) { m_queryLoggingConfigs = value; }

    /**
     * <p>An array that contains one <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_QueryLoggingConfig.html">QueryLoggingConfig</a>
     * element for each configuration for DNS query logging that is associated with the
     * current Amazon Web Services account.</p>
     */
    inline void SetQueryLoggingConfigs(Aws::Vector<QueryLoggingConfig>&& value) { m_queryLoggingConfigs = std::move(value); }

    /**
     * <p>An array that contains one <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_QueryLoggingConfig.html">QueryLoggingConfig</a>
     * element for each configuration for DNS query logging that is associated with the
     * current Amazon Web Services account.</p>
     */
    inline ListQueryLoggingConfigsResult& WithQueryLoggingConfigs(const Aws::Vector<QueryLoggingConfig>& value) { SetQueryLoggingConfigs(value); return *this;}

    /**
     * <p>An array that contains one <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_QueryLoggingConfig.html">QueryLoggingConfig</a>
     * element for each configuration for DNS query logging that is associated with the
     * current Amazon Web Services account.</p>
     */
    inline ListQueryLoggingConfigsResult& WithQueryLoggingConfigs(Aws::Vector<QueryLoggingConfig>&& value) { SetQueryLoggingConfigs(std::move(value)); return *this;}

    /**
     * <p>An array that contains one <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_QueryLoggingConfig.html">QueryLoggingConfig</a>
     * element for each configuration for DNS query logging that is associated with the
     * current Amazon Web Services account.</p>
     */
    inline ListQueryLoggingConfigsResult& AddQueryLoggingConfigs(const QueryLoggingConfig& value) { m_queryLoggingConfigs.push_back(value); return *this; }

    /**
     * <p>An array that contains one <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_QueryLoggingConfig.html">QueryLoggingConfig</a>
     * element for each configuration for DNS query logging that is associated with the
     * current Amazon Web Services account.</p>
     */
    inline ListQueryLoggingConfigsResult& AddQueryLoggingConfigs(QueryLoggingConfig&& value) { m_queryLoggingConfigs.push_back(std::move(value)); return *this; }


    /**
     * <p>If a response includes the last of the query logging configurations that are
     * associated with the current Amazon Web Services account, <code>NextToken</code>
     * doesn't appear in the response.</p> <p>If a response doesn't include the last of
     * the configurations, you can get more configurations by submitting another <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListQueryLoggingConfigs.html">ListQueryLoggingConfigs</a>
     * request. Get the value of <code>NextToken</code> that Amazon Route 53 returned
     * in the previous response and include it in <code>NextToken</code> in the next
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If a response includes the last of the query logging configurations that are
     * associated with the current Amazon Web Services account, <code>NextToken</code>
     * doesn't appear in the response.</p> <p>If a response doesn't include the last of
     * the configurations, you can get more configurations by submitting another <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListQueryLoggingConfigs.html">ListQueryLoggingConfigs</a>
     * request. Get the value of <code>NextToken</code> that Amazon Route 53 returned
     * in the previous response and include it in <code>NextToken</code> in the next
     * request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If a response includes the last of the query logging configurations that are
     * associated with the current Amazon Web Services account, <code>NextToken</code>
     * doesn't appear in the response.</p> <p>If a response doesn't include the last of
     * the configurations, you can get more configurations by submitting another <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListQueryLoggingConfigs.html">ListQueryLoggingConfigs</a>
     * request. Get the value of <code>NextToken</code> that Amazon Route 53 returned
     * in the previous response and include it in <code>NextToken</code> in the next
     * request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If a response includes the last of the query logging configurations that are
     * associated with the current Amazon Web Services account, <code>NextToken</code>
     * doesn't appear in the response.</p> <p>If a response doesn't include the last of
     * the configurations, you can get more configurations by submitting another <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListQueryLoggingConfigs.html">ListQueryLoggingConfigs</a>
     * request. Get the value of <code>NextToken</code> that Amazon Route 53 returned
     * in the previous response and include it in <code>NextToken</code> in the next
     * request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If a response includes the last of the query logging configurations that are
     * associated with the current Amazon Web Services account, <code>NextToken</code>
     * doesn't appear in the response.</p> <p>If a response doesn't include the last of
     * the configurations, you can get more configurations by submitting another <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListQueryLoggingConfigs.html">ListQueryLoggingConfigs</a>
     * request. Get the value of <code>NextToken</code> that Amazon Route 53 returned
     * in the previous response and include it in <code>NextToken</code> in the next
     * request.</p>
     */
    inline ListQueryLoggingConfigsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If a response includes the last of the query logging configurations that are
     * associated with the current Amazon Web Services account, <code>NextToken</code>
     * doesn't appear in the response.</p> <p>If a response doesn't include the last of
     * the configurations, you can get more configurations by submitting another <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListQueryLoggingConfigs.html">ListQueryLoggingConfigs</a>
     * request. Get the value of <code>NextToken</code> that Amazon Route 53 returned
     * in the previous response and include it in <code>NextToken</code> in the next
     * request.</p>
     */
    inline ListQueryLoggingConfigsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If a response includes the last of the query logging configurations that are
     * associated with the current Amazon Web Services account, <code>NextToken</code>
     * doesn't appear in the response.</p> <p>If a response doesn't include the last of
     * the configurations, you can get more configurations by submitting another <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListQueryLoggingConfigs.html">ListQueryLoggingConfigs</a>
     * request. Get the value of <code>NextToken</code> that Amazon Route 53 returned
     * in the previous response and include it in <code>NextToken</code> in the next
     * request.</p>
     */
    inline ListQueryLoggingConfigsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<QueryLoggingConfig> m_queryLoggingConfigs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
