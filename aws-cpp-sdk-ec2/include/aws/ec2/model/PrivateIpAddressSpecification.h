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
#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a secondary private IP address for a network interface.</p>
   */
  class AWS_EC2_API PrivateIpAddressSpecification
  {
  public:
    PrivateIpAddressSpecification();
    PrivateIpAddressSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    PrivateIpAddressSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The private IP addresses.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>The private IP addresses.</p>
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>The private IP addresses.</p>
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>The private IP addresses.</p>
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * <p>The private IP addresses.</p>
     */
    inline PrivateIpAddressSpecification& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The private IP addresses.</p>
     */
    inline PrivateIpAddressSpecification& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The private IP addresses.</p>
     */
    inline PrivateIpAddressSpecification& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>Indicates whether the private IP address is the primary private IP address.
     * Only one IP address can be designated as primary.</p>
     */
    inline bool GetPrimary() const{ return m_primary; }

    /**
     * <p>Indicates whether the private IP address is the primary private IP address.
     * Only one IP address can be designated as primary.</p>
     */
    inline void SetPrimary(bool value) { m_primaryHasBeenSet = true; m_primary = value; }

    /**
     * <p>Indicates whether the private IP address is the primary private IP address.
     * Only one IP address can be designated as primary.</p>
     */
    inline PrivateIpAddressSpecification& WithPrimary(bool value) { SetPrimary(value); return *this;}

  private:
    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet;
    bool m_primary;
    bool m_primaryHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
