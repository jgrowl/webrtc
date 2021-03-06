/*
 *  Copyright (c) 2012 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#include "webrtc/common_types.h"

#include <string.h>

namespace webrtc {

int InStream::Rewind() { return -1; }

int OutStream::Rewind() { return -1; }

StreamDataCounters::StreamDataCounters() : first_packet_time_ms(-1) {}

RTPHeader::RTPHeader()
    : markerBit(false),
      payloadType(0),
      sequenceNumber(0),
      timestamp(0),
      ssrc(0),
      numCSRCs(0),
      paddingLength(0),
      headerLength(0),
      payload_type_frequency(0),
      extension() {
  memset(&arrOfCSRCs, 0, sizeof(arrOfCSRCs));
}

}  // namespace webrtc
