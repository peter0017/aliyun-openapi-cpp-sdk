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

#include <alibabacloud/ehpc/model/ListNodesRequest.h>

using AlibabaCloud::EHPC::Model::ListNodesRequest;

ListNodesRequest::ListNodesRequest() :
	RpcServiceRequest("ehpc", "2017-07-14", "ListNodes")
{}

ListNodesRequest::~ListNodesRequest()
{}

std::string ListNodesRequest::getHostName()const
{
	return hostName_;
}

void ListNodesRequest::setHostName(const std::string& hostName)
{
	hostName_ = hostName;
	setParameter("HostName", hostName);
}

std::string ListNodesRequest::getRole()const
{
	return role_;
}

void ListNodesRequest::setRole(const std::string& role)
{
	role_ = role;
	setParameter("Role", role);
}

int ListNodesRequest::getPageSize()const
{
	return pageSize_;
}

void ListNodesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListNodesRequest::getClusterId()const
{
	return clusterId_;
}

void ListNodesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ListNodesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListNodesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListNodesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListNodesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

