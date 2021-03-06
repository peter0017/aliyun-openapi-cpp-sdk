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

#include <alibabacloud/cloudphoto/model/ListAlbumPhotosResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

ListAlbumPhotosResult::ListAlbumPhotosResult() :
	ServiceResult()
{}

ListAlbumPhotosResult::ListAlbumPhotosResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAlbumPhotosResult::~ListAlbumPhotosResult()
{}

void ListAlbumPhotosResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allResults = value["Results"]["Result"];
	for (auto value : allResults)
	{
		Result resultsObject;
		if(!value["PhotoId"].isNull())
			resultsObject.photoId = std::stol(value["PhotoId"].asString());
		if(!value["PhotoIdStr"].isNull())
			resultsObject.photoIdStr = value["PhotoIdStr"].asString();
		if(!value["State"].isNull())
			resultsObject.state = value["State"].asString();
		results_.push_back(resultsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["NextCursor"].isNull())
		nextCursor_ = value["NextCursor"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Action"].isNull())
		action_ = value["Action"].asString();

}

std::string ListAlbumPhotosResult::getNextCursor()const
{
	return nextCursor_;
}

int ListAlbumPhotosResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListAlbumPhotosResult::getAction()const
{
	return action_;
}

std::string ListAlbumPhotosResult::getMessage()const
{
	return message_;
}

std::vector<ListAlbumPhotosResult::Result> ListAlbumPhotosResult::getResults()const
{
	return results_;
}

std::string ListAlbumPhotosResult::getCode()const
{
	return code_;
}

