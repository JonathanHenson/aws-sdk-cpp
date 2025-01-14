﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CostExplorer
{
namespace Model
{
  class GetTagsResult
  {
  public:
    AWS_COSTEXPLORER_API GetTagsResult();
    AWS_COSTEXPLORER_API GetTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline GetTagsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline GetTagsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline GetTagsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}


    /**
     * <p>The tags that match your request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags that match your request.</p>
     */
    inline void SetTags(const Aws::Vector<Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags that match your request.</p>
     */
    inline void SetTags(Aws::Vector<Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags that match your request.</p>
     */
    inline GetTagsResult& WithTags(const Aws::Vector<Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags that match your request.</p>
     */
    inline GetTagsResult& WithTags(Aws::Vector<Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags that match your request.</p>
     */
    inline GetTagsResult& AddTags(const Aws::String& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>The tags that match your request.</p>
     */
    inline GetTagsResult& AddTags(Aws::String&& value) { m_tags.push_back(std::move(value)); return *this; }

    /**
     * <p>The tags that match your request.</p>
     */
    inline GetTagsResult& AddTags(const char* value) { m_tags.push_back(value); return *this; }


    /**
     * <p>The number of query results that Amazon Web Services returns at a time.</p>
     */
    inline int GetReturnSize() const{ return m_returnSize; }

    /**
     * <p>The number of query results that Amazon Web Services returns at a time.</p>
     */
    inline void SetReturnSize(int value) { m_returnSize = value; }

    /**
     * <p>The number of query results that Amazon Web Services returns at a time.</p>
     */
    inline GetTagsResult& WithReturnSize(int value) { SetReturnSize(value); return *this;}


    /**
     * <p>The total number of query results.</p>
     */
    inline int GetTotalSize() const{ return m_totalSize; }

    /**
     * <p>The total number of query results.</p>
     */
    inline void SetTotalSize(int value) { m_totalSize = value; }

    /**
     * <p>The total number of query results.</p>
     */
    inline GetTagsResult& WithTotalSize(int value) { SetTotalSize(value); return *this;}

  private:

    Aws::String m_nextPageToken;

    Aws::Vector<Aws::String> m_tags;

    int m_returnSize;

    int m_totalSize;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
