/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/rds/model/DescribeInstanceAutoRenewalAttributeRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeInstanceAutoRenewalAttributeRequest::DescribeInstanceAutoRenewalAttributeRequest() :
	RdsRequest("DescribeInstanceAutoRenewalAttribute")
{}

DescribeInstanceAutoRenewalAttributeRequest::~DescribeInstanceAutoRenewalAttributeRequest()
{}

long DescribeInstanceAutoRenewalAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeInstanceAutoRenewalAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInstanceAutoRenewalAttributeRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DescribeInstanceAutoRenewalAttributeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeInstanceAutoRenewalAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int DescribeInstanceAutoRenewalAttributeRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeInstanceAutoRenewalAttributeRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long DescribeInstanceAutoRenewalAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeInstanceAutoRenewalAttributeRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeInstanceAutoRenewalAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeInstanceAutoRenewalAttributeRequest::getProxyId()const
{
	return proxyId_;
}

void DescribeInstanceAutoRenewalAttributeRequest::setProxyId(const std::string& proxyId)
{
	proxyId_ = proxyId;
	setParameter("ProxyId", proxyId);
}
