﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/DocumentationPartLocation.h>
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
namespace APIGateway
{
namespace Model
{
  /**
   * <p>A documentation part for a targeted API entity.</p> <div class="remarks">
   * <p>A documentation part consists of a content map (<code>properties</code>) and
   * a target (<code>location</code>). The target specifies an API entity to which
   * the documentation content applies. The supported API entity types are
   * <code>API</code>, <code>AUTHORIZER</code>, <code>MODEL</code>,
   * <code>RESOURCE</code>, <code>METHOD</code>, <code>PATH_PARAMETER</code>,
   * <code>QUERY_PARAMETER</code>, <code>REQUEST_HEADER</code>,
   * <code>REQUEST_BODY</code>, <code>RESPONSE</code>, <code>RESPONSE_HEADER</code>,
   * and <code>RESPONSE_BODY</code>. Valid <code>location</code> fields depend on the
   * API entity type. All valid fields are not required.</p> <p>The content map is a
   * JSON string of API-specific key-value pairs. Although an API can use any shape
   * for the content map, only the Swagger-compliant documentation fields will be
   * injected into the associated API entity definition in the exported Swagger
   * definition file.</p></div> <div class="seeAlso"> <a
   * href="[[AwsDocsUrlPrefix]]/apigateway/latest/developerguide/api-gateway-documenting-api.html">Documenting
   * an API</a>, <a>DocumentationParts</a> </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DocumentationPart">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetDocumentationPartResult
  {
  public:
    GetDocumentationPartResult();
    GetDocumentationPartResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDocumentationPartResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <a>DocumentationPart</a> identifier, generated by API Gateway when the
     * <code>DocumentationPart</code> is created.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The <a>DocumentationPart</a> identifier, generated by API Gateway when the
     * <code>DocumentationPart</code> is created.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The <a>DocumentationPart</a> identifier, generated by API Gateway when the
     * <code>DocumentationPart</code> is created.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The <a>DocumentationPart</a> identifier, generated by API Gateway when the
     * <code>DocumentationPart</code> is created.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The <a>DocumentationPart</a> identifier, generated by API Gateway when the
     * <code>DocumentationPart</code> is created.</p>
     */
    inline GetDocumentationPartResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The <a>DocumentationPart</a> identifier, generated by API Gateway when the
     * <code>DocumentationPart</code> is created.</p>
     */
    inline GetDocumentationPartResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The <a>DocumentationPart</a> identifier, generated by API Gateway when the
     * <code>DocumentationPart</code> is created.</p>
     */
    inline GetDocumentationPartResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The location of the API entity to which the documentation applies. Valid
     * fields depend on the targeted API entity type. All the valid location fields are
     * not required. If not explicitly specified, a valid location field is treated as
     * a wildcard and associated documentation content may be inherited by matching
     * entities, unless overridden.</p>
     */
    inline const DocumentationPartLocation& GetLocation() const{ return m_location; }

    /**
     * <p>The location of the API entity to which the documentation applies. Valid
     * fields depend on the targeted API entity type. All the valid location fields are
     * not required. If not explicitly specified, a valid location field is treated as
     * a wildcard and associated documentation content may be inherited by matching
     * entities, unless overridden.</p>
     */
    inline void SetLocation(const DocumentationPartLocation& value) { m_location = value; }

    /**
     * <p>The location of the API entity to which the documentation applies. Valid
     * fields depend on the targeted API entity type. All the valid location fields are
     * not required. If not explicitly specified, a valid location field is treated as
     * a wildcard and associated documentation content may be inherited by matching
     * entities, unless overridden.</p>
     */
    inline void SetLocation(DocumentationPartLocation&& value) { m_location = std::move(value); }

    /**
     * <p>The location of the API entity to which the documentation applies. Valid
     * fields depend on the targeted API entity type. All the valid location fields are
     * not required. If not explicitly specified, a valid location field is treated as
     * a wildcard and associated documentation content may be inherited by matching
     * entities, unless overridden.</p>
     */
    inline GetDocumentationPartResult& WithLocation(const DocumentationPartLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>The location of the API entity to which the documentation applies. Valid
     * fields depend on the targeted API entity type. All the valid location fields are
     * not required. If not explicitly specified, a valid location field is treated as
     * a wildcard and associated documentation content may be inherited by matching
     * entities, unless overridden.</p>
     */
    inline GetDocumentationPartResult& WithLocation(DocumentationPartLocation&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>A content map of API-specific key-value pairs describing the targeted API
     * entity. The map must be encoded as a JSON string, e.g., <code>"{
     * \"description\": \"The API does ...\" }"</code>. Only Swagger-compliant
     * documentation-related fields from the <literal>properties</literal> map are
     * exported and, hence, published as part of the API entity definitions, while the
     * original documentation parts are exported in a Swagger extension of
     * <code>x-amazon-apigateway-documentation</code>.</p>
     */
    inline const Aws::String& GetProperties() const{ return m_properties; }

    /**
     * <p>A content map of API-specific key-value pairs describing the targeted API
     * entity. The map must be encoded as a JSON string, e.g., <code>"{
     * \"description\": \"The API does ...\" }"</code>. Only Swagger-compliant
     * documentation-related fields from the <literal>properties</literal> map are
     * exported and, hence, published as part of the API entity definitions, while the
     * original documentation parts are exported in a Swagger extension of
     * <code>x-amazon-apigateway-documentation</code>.</p>
     */
    inline void SetProperties(const Aws::String& value) { m_properties = value; }

    /**
     * <p>A content map of API-specific key-value pairs describing the targeted API
     * entity. The map must be encoded as a JSON string, e.g., <code>"{
     * \"description\": \"The API does ...\" }"</code>. Only Swagger-compliant
     * documentation-related fields from the <literal>properties</literal> map are
     * exported and, hence, published as part of the API entity definitions, while the
     * original documentation parts are exported in a Swagger extension of
     * <code>x-amazon-apigateway-documentation</code>.</p>
     */
    inline void SetProperties(Aws::String&& value) { m_properties = std::move(value); }

    /**
     * <p>A content map of API-specific key-value pairs describing the targeted API
     * entity. The map must be encoded as a JSON string, e.g., <code>"{
     * \"description\": \"The API does ...\" }"</code>. Only Swagger-compliant
     * documentation-related fields from the <literal>properties</literal> map are
     * exported and, hence, published as part of the API entity definitions, while the
     * original documentation parts are exported in a Swagger extension of
     * <code>x-amazon-apigateway-documentation</code>.</p>
     */
    inline void SetProperties(const char* value) { m_properties.assign(value); }

    /**
     * <p>A content map of API-specific key-value pairs describing the targeted API
     * entity. The map must be encoded as a JSON string, e.g., <code>"{
     * \"description\": \"The API does ...\" }"</code>. Only Swagger-compliant
     * documentation-related fields from the <literal>properties</literal> map are
     * exported and, hence, published as part of the API entity definitions, while the
     * original documentation parts are exported in a Swagger extension of
     * <code>x-amazon-apigateway-documentation</code>.</p>
     */
    inline GetDocumentationPartResult& WithProperties(const Aws::String& value) { SetProperties(value); return *this;}

    /**
     * <p>A content map of API-specific key-value pairs describing the targeted API
     * entity. The map must be encoded as a JSON string, e.g., <code>"{
     * \"description\": \"The API does ...\" }"</code>. Only Swagger-compliant
     * documentation-related fields from the <literal>properties</literal> map are
     * exported and, hence, published as part of the API entity definitions, while the
     * original documentation parts are exported in a Swagger extension of
     * <code>x-amazon-apigateway-documentation</code>.</p>
     */
    inline GetDocumentationPartResult& WithProperties(Aws::String&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p>A content map of API-specific key-value pairs describing the targeted API
     * entity. The map must be encoded as a JSON string, e.g., <code>"{
     * \"description\": \"The API does ...\" }"</code>. Only Swagger-compliant
     * documentation-related fields from the <literal>properties</literal> map are
     * exported and, hence, published as part of the API entity definitions, while the
     * original documentation parts are exported in a Swagger extension of
     * <code>x-amazon-apigateway-documentation</code>.</p>
     */
    inline GetDocumentationPartResult& WithProperties(const char* value) { SetProperties(value); return *this;}

  private:

    Aws::String m_id;

    DocumentationPartLocation m_location;

    Aws::String m_properties;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
