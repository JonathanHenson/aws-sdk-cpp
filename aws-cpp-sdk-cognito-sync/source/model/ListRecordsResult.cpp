﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/model/ListRecordsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CognitoSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRecordsResult::ListRecordsResult() : 
    m_count(0),
    m_datasetSyncCount(0),
    m_datasetExists(false),
    m_datasetDeletedAfterRequestedSyncCount(false)
{
}

ListRecordsResult::ListRecordsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_count(0),
    m_datasetSyncCount(0),
    m_datasetExists(false),
    m_datasetDeletedAfterRequestedSyncCount(false)
{
  *this = result;
}

ListRecordsResult& ListRecordsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Records"))
  {
    Aws::Utils::Array<JsonView> recordsJsonList = jsonValue.GetArray("Records");
    for(unsigned recordsIndex = 0; recordsIndex < recordsJsonList.GetLength(); ++recordsIndex)
    {
      m_records.push_back(recordsJsonList[recordsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Count"))
  {
    m_count = jsonValue.GetInteger("Count");

  }

  if(jsonValue.ValueExists("DatasetSyncCount"))
  {
    m_datasetSyncCount = jsonValue.GetInt64("DatasetSyncCount");

  }

  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetString("LastModifiedBy");

  }

  if(jsonValue.ValueExists("MergedDatasetNames"))
  {
    Aws::Utils::Array<JsonView> mergedDatasetNamesJsonList = jsonValue.GetArray("MergedDatasetNames");
    for(unsigned mergedDatasetNamesIndex = 0; mergedDatasetNamesIndex < mergedDatasetNamesJsonList.GetLength(); ++mergedDatasetNamesIndex)
    {
      m_mergedDatasetNames.push_back(mergedDatasetNamesJsonList[mergedDatasetNamesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("DatasetExists"))
  {
    m_datasetExists = jsonValue.GetBool("DatasetExists");

  }

  if(jsonValue.ValueExists("DatasetDeletedAfterRequestedSyncCount"))
  {
    m_datasetDeletedAfterRequestedSyncCount = jsonValue.GetBool("DatasetDeletedAfterRequestedSyncCount");

  }

  if(jsonValue.ValueExists("SyncSessionToken"))
  {
    m_syncSessionToken = jsonValue.GetString("SyncSessionToken");

  }



  return *this;
}
