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
#include <aws/iot/model/CreatePolicyVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

CreatePolicyVersionRequest::CreatePolicyVersionRequest() : 
    m_policyNameHasBeenSet(false),
    m_policyDocumentHasBeenSet(false),
    m_setAsDefault(false),
    m_setAsDefaultHasBeenSet(false)
{
}

Aws::String CreatePolicyVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyDocumentHasBeenSet)
  {
   payload.WithString("policyDocument", m_policyDocument);

  }

  return payload.WriteReadable();
}

void CreatePolicyVersionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_setAsDefaultHasBeenSet)
    {
      ss << m_setAsDefault;
      uri.AddQueryStringParameter("setAsDefault", ss.str());
      ss.str("");
    }

}


