﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/RateBasedRule.h>
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
namespace WAFRegional
{
namespace Model
{
  class GetRateBasedRuleResult
  {
  public:
    AWS_WAFREGIONAL_API GetRateBasedRuleResult();
    AWS_WAFREGIONAL_API GetRateBasedRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API GetRateBasedRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the <a>RateBasedRule</a> that you specified in the
     * <code>GetRateBasedRule</code> request.</p>
     */
    inline const RateBasedRule& GetRule() const{ return m_rule; }

    /**
     * <p>Information about the <a>RateBasedRule</a> that you specified in the
     * <code>GetRateBasedRule</code> request.</p>
     */
    inline void SetRule(const RateBasedRule& value) { m_rule = value; }

    /**
     * <p>Information about the <a>RateBasedRule</a> that you specified in the
     * <code>GetRateBasedRule</code> request.</p>
     */
    inline void SetRule(RateBasedRule&& value) { m_rule = std::move(value); }

    /**
     * <p>Information about the <a>RateBasedRule</a> that you specified in the
     * <code>GetRateBasedRule</code> request.</p>
     */
    inline GetRateBasedRuleResult& WithRule(const RateBasedRule& value) { SetRule(value); return *this;}

    /**
     * <p>Information about the <a>RateBasedRule</a> that you specified in the
     * <code>GetRateBasedRule</code> request.</p>
     */
    inline GetRateBasedRuleResult& WithRule(RateBasedRule&& value) { SetRule(std::move(value)); return *this;}

  private:

    RateBasedRule m_rule;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
