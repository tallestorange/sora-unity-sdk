#ifndef SORA_RTC_MESSAGE_SENDER_H_
#define SORA_RTC_MESSAGE_SENDER_H_

#include <string>

// WebRTC
#include <api/peer_connection_interface.h>

namespace sora {

class RTCMessageSender {
 public:
  virtual void OnIceConnectionStateChange(
      webrtc::PeerConnectionInterface::IceConnectionState new_state) = 0;
  virtual void OnConnectionChange(
      webrtc::PeerConnectionInterface::PeerConnectionState new_state) = 0;
  virtual void OnIceCandidate(const std::string sdp_mid,
                              const int sdp_mlineindex,
                              const std::string sdp) = 0;
};

}  // namespace sora

#endif
