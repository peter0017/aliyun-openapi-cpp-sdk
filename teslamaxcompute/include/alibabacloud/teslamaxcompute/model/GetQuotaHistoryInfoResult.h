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

#ifndef ALIBABACLOUD_TESLAMAXCOMPUTE_MODEL_GETQUOTAHISTORYINFORESULT_H_
#define ALIBABACLOUD_TESLAMAXCOMPUTE_MODEL_GETQUOTAHISTORYINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/teslamaxcompute/TeslaMaxComputeExport.h>

namespace AlibabaCloud
{
	namespace TeslaMaxCompute
	{
		namespace Model
		{
			class ALIBABACLOUD_TESLAMAXCOMPUTE_EXPORT GetQuotaHistoryInfoResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					struct Point
					{
						struct CpuMaxQuota
						{
							int min;
							int avg;
							int max;
						};
						struct CpuMinQuota
						{
							int min;
							int avg;
							int max;
						};
						struct MemUsed
						{
							int min;
							int avg;
							int max;
						};
						struct CpuUsed
						{
							int min;
							int avg;
							int max;
						};
						std::vector<CpuMinQuota> cpuMinQuota;
						std::vector<MemUsed> memUsed;
						std::vector<CpuMaxQuota> cpuMaxQuota;
						std::vector<CpuUsed> cpuUsed;
					};
					int times;
					std::vector<Point> point;
				};


				GetQuotaHistoryInfoResult();
				explicit GetQuotaHistoryInfoResult(const std::string &payload);
				~GetQuotaHistoryInfoResult();
				std::string getMessage()const;
				std::vector<DataItem> getData()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<DataItem> data_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TESLAMAXCOMPUTE_MODEL_GETQUOTAHISTORYINFORESULT_H_