/*
    Copyright 2021 Picovoice Inc.

    You may not use this file except in compliance with the license. A copy of the license is located in the "LICENSE"
    file accompanying this source.

    Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on
    an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the
    specific language governing permissions and limitations under the License.
*/

#ifndef PV_PSOC6_H
#define PV_PSOC6_H

#include "picovoice.h"

pv_status_t pv_board_init(void);
pv_status_t pv_message_init(void);
const uint32_t pv_get_uuid_size(void);
const uint8_t *pv_get_uuid(void);
void pv_board_deinit(void);

#endif // PV_PSOC6_H
