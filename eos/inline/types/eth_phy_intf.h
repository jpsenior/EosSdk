// Copyright (c) 2017 Arista Networks, Inc.  All rights reserved.
// Arista Networks, Inc. Confidential and Proprietary.

#ifndef EOS_INLINE_TYPES_ETH_PHY_INTF_H
#define EOS_INLINE_TYPES_ETH_PHY_INTF_H

namespace eos {

inline std::ostream&
operator<<(std::ostream& os, const eth_link_speed_t & enum_val) {
   if (enum_val==LINK_SPEED_UNKNOWN) {
      os << "LINK_SPEED_UNKNOWN";
   } else if (enum_val==LINK_SPEED_10MBPS) {
      os << "LINK_SPEED_10MBPS";
   } else if (enum_val==LINK_SPEED_100MBPS) {
      os << "LINK_SPEED_100MBPS";
   } else if (enum_val==LINK_SPEED_1GBPS) {
      os << "LINK_SPEED_1GBPS";
   } else if (enum_val==LINK_SPEED_10GBPS) {
      os << "LINK_SPEED_10GBPS";
   } else if (enum_val==LINK_SPEED_25GBPS) {
      os << "LINK_SPEED_25GBPS";
   } else if (enum_val==LINK_SPEED_40GBPS) {
      os << "LINK_SPEED_40GBPS";
   } else if (enum_val==LINK_SPEED_50GBPS) {
      os << "LINK_SPEED_50GBPS";
   } else if (enum_val==LINK_SPEED_100GBPS) {
      os << "LINK_SPEED_100GBPS";
   } else if (enum_val==LINK_SPEED_UNEXPECTED) {
      os << "LINK_SPEED_UNEXPECTED";
   } else {
      os << "Unknown value";
   }
   return os;
}



// Default constructor.
inline eth_phy_intf_counters_t::eth_phy_intf_counters_t() :
      single_collision_frames_(0), multiple_collision_frames_(0), fcs_errors_(0),
      alignment_errors_(0), deferred_transmissions_(0), late_collisions_(0),
      excessive_collisions_(0), internal_mac_transmit_errors_(0),
      carrier_sense_errors_(0), internal_mac_receive_errors_(0),
      frame_too_shorts_(0), frame_too_longs_(0), sqe_test_errors_(0),
      symbol_errors_(0), in_unknown_opcodes_(0), out_pause_frames_(0),
      in_pause_frames_(0), fragments_(0), jabbers_(0) {
}

inline eth_phy_intf_counters_t::eth_phy_intf_counters_t(
         uint64_t single_collision_frames, uint64_t multiple_collision_frames,
         uint64_t fcs_errors, uint64_t alignment_errors,
         uint64_t deferred_transmissions, uint64_t late_collisions,
         uint64_t excessive_collisions, uint64_t internal_mac_transmit_errors,
         uint64_t carrier_sense_errors, uint64_t internal_mac_receive_errors,
         uint64_t frame_too_shorts, uint64_t frame_too_longs,
         uint64_t sqe_test_errors, uint64_t symbol_errors,
         uint64_t in_unknown_opcodes, uint64_t out_pause_frames,
         uint64_t in_pause_frames, uint64_t fragments, uint64_t jabbers) :
      single_collision_frames_(single_collision_frames),
      multiple_collision_frames_(multiple_collision_frames),
      fcs_errors_(fcs_errors), alignment_errors_(alignment_errors),
      deferred_transmissions_(deferred_transmissions),
      late_collisions_(late_collisions),
      excessive_collisions_(excessive_collisions),
      internal_mac_transmit_errors_(internal_mac_transmit_errors),
      carrier_sense_errors_(carrier_sense_errors),
      internal_mac_receive_errors_(internal_mac_receive_errors),
      frame_too_shorts_(frame_too_shorts), frame_too_longs_(frame_too_longs),
      sqe_test_errors_(sqe_test_errors), symbol_errors_(symbol_errors),
      in_unknown_opcodes_(in_unknown_opcodes), out_pause_frames_(out_pause_frames),
      in_pause_frames_(in_pause_frames), fragments_(fragments), jabbers_(jabbers) {
}

inline uint64_t
eth_phy_intf_counters_t::single_collision_frames() const {
   return single_collision_frames_;
}

inline uint64_t
eth_phy_intf_counters_t::multiple_collision_frames() const {
   return multiple_collision_frames_;
}

inline uint64_t
eth_phy_intf_counters_t::fcs_errors() const {
   return fcs_errors_;
}

inline uint64_t
eth_phy_intf_counters_t::alignment_errors() const {
   return alignment_errors_;
}

inline uint64_t
eth_phy_intf_counters_t::deferred_transmissions() const {
   return deferred_transmissions_;
}

inline uint64_t
eth_phy_intf_counters_t::late_collisions() const {
   return late_collisions_;
}

inline uint64_t
eth_phy_intf_counters_t::excessive_collisions() const {
   return excessive_collisions_;
}

inline uint64_t
eth_phy_intf_counters_t::internal_mac_transmit_errors() const {
   return internal_mac_transmit_errors_;
}

inline uint64_t
eth_phy_intf_counters_t::carrier_sense_errors() const {
   return carrier_sense_errors_;
}

inline uint64_t
eth_phy_intf_counters_t::internal_mac_receive_errors() const {
   return internal_mac_receive_errors_;
}

inline uint64_t
eth_phy_intf_counters_t::frame_too_shorts() const {
   return frame_too_shorts_;
}

inline uint64_t
eth_phy_intf_counters_t::frame_too_longs() const {
   return frame_too_longs_;
}

inline uint64_t
eth_phy_intf_counters_t::sqe_test_errors() const {
   return sqe_test_errors_;
}

inline uint64_t
eth_phy_intf_counters_t::symbol_errors() const {
   return symbol_errors_;
}

inline uint64_t
eth_phy_intf_counters_t::in_unknown_opcodes() const {
   return in_unknown_opcodes_;
}

inline uint64_t
eth_phy_intf_counters_t::out_pause_frames() const {
   return out_pause_frames_;
}

inline uint64_t
eth_phy_intf_counters_t::in_pause_frames() const {
   return in_pause_frames_;
}

inline uint64_t
eth_phy_intf_counters_t::fragments() const {
   return fragments_;
}

inline uint64_t
eth_phy_intf_counters_t::jabbers() const {
   return jabbers_;
}

inline bool
eth_phy_intf_counters_t::operator==(eth_phy_intf_counters_t const & other) const {
   return single_collision_frames_ == other.single_collision_frames_ &&
          multiple_collision_frames_ == other.multiple_collision_frames_ &&
          fcs_errors_ == other.fcs_errors_ &&
          alignment_errors_ == other.alignment_errors_ &&
          deferred_transmissions_ == other.deferred_transmissions_ &&
          late_collisions_ == other.late_collisions_ &&
          excessive_collisions_ == other.excessive_collisions_ &&
          internal_mac_transmit_errors_ == other.internal_mac_transmit_errors_ &&
          carrier_sense_errors_ == other.carrier_sense_errors_ &&
          internal_mac_receive_errors_ == other.internal_mac_receive_errors_ &&
          frame_too_shorts_ == other.frame_too_shorts_ &&
          frame_too_longs_ == other.frame_too_longs_ &&
          sqe_test_errors_ == other.sqe_test_errors_ &&
          symbol_errors_ == other.symbol_errors_ &&
          in_unknown_opcodes_ == other.in_unknown_opcodes_ &&
          out_pause_frames_ == other.out_pause_frames_ &&
          in_pause_frames_ == other.in_pause_frames_ &&
          fragments_ == other.fragments_ &&
          jabbers_ == other.jabbers_;
}

inline bool
eth_phy_intf_counters_t::operator!=(eth_phy_intf_counters_t const & other) const {
   return !operator==(other);
}

inline uint32_t
eth_phy_intf_counters_t::hash() const {
   uint32_t ret = 0;
   ret = hash_mix::mix((uint8_t *)&single_collision_frames_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&multiple_collision_frames_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&fcs_errors_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&alignment_errors_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&deferred_transmissions_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&late_collisions_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&excessive_collisions_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&internal_mac_transmit_errors_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&carrier_sense_errors_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&internal_mac_receive_errors_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&frame_too_shorts_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&frame_too_longs_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&sqe_test_errors_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&symbol_errors_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&in_unknown_opcodes_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&out_pause_frames_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&in_pause_frames_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&fragments_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&jabbers_,
              sizeof(uint64_t), ret);
   ret = hash_mix::final_mix(ret);
   return ret;
}

inline std::string
eth_phy_intf_counters_t::to_string() const {
   std::ostringstream ss;
   ss << "eth_phy_intf_counters_t(";
   ss << "single_collision_frames=" << single_collision_frames_;
   ss << ", multiple_collision_frames=" << multiple_collision_frames_;
   ss << ", fcs_errors=" << fcs_errors_;
   ss << ", alignment_errors=" << alignment_errors_;
   ss << ", deferred_transmissions=" << deferred_transmissions_;
   ss << ", late_collisions=" << late_collisions_;
   ss << ", excessive_collisions=" << excessive_collisions_;
   ss << ", internal_mac_transmit_errors=" << internal_mac_transmit_errors_;
   ss << ", carrier_sense_errors=" << carrier_sense_errors_;
   ss << ", internal_mac_receive_errors=" << internal_mac_receive_errors_;
   ss << ", frame_too_shorts=" << frame_too_shorts_;
   ss << ", frame_too_longs=" << frame_too_longs_;
   ss << ", sqe_test_errors=" << sqe_test_errors_;
   ss << ", symbol_errors=" << symbol_errors_;
   ss << ", in_unknown_opcodes=" << in_unknown_opcodes_;
   ss << ", out_pause_frames=" << out_pause_frames_;
   ss << ", in_pause_frames=" << in_pause_frames_;
   ss << ", fragments=" << fragments_;
   ss << ", jabbers=" << jabbers_;
   ss << ")";
   return ss.str();
}

inline std::ostream&
operator<<(std::ostream& os, const eth_phy_intf_counters_t& obj) {
   os << obj.to_string();
   return os;
}



// Default constructor.
inline eth_phy_intf_bin_counters_t::eth_phy_intf_bin_counters_t() :
      in_64_octet_frames_(0), in_65_to_127_octet_frames_(0),
      in_128_to_255_octet_frames_(0), in_256_to_511_octet_frames_(0),
      in_512_to_1023_octet_frames_(0), in_1024_to_1522_octet_frames_(0),
      in_1523_to_max_octet_frames_(0), out_64_octet_frames_(0),
      out_65_to_127_octet_frames_(0), out_128_to_255_octet_frames_(0),
      out_256_to_511_octet_frames_(0), out_512_to_1023_octet_frames_(0),
      out_1024_to_1522_octet_frames_(0), out_1523_to_max_octet_frames_(0) {
}

inline eth_phy_intf_bin_counters_t::eth_phy_intf_bin_counters_t(
         uint64_t in_64_octet_frames, uint64_t in_65_to_127_octet_frames,
         uint64_t in_128_to_255_octet_frames, uint64_t in_256_to_511_octet_frames,
         uint64_t in_512_to_1023_octet_frames,
         uint64_t in_1024_to_1522_octet_frames,
         uint64_t in_1523_to_max_octet_frames, uint64_t out_64_octet_frames,
         uint64_t out_65_to_127_octet_frames, uint64_t out_128_to_255_octet_frames,
         uint64_t out_256_to_511_octet_frames,
         uint64_t out_512_to_1023_octet_frames,
         uint64_t out_1024_to_1522_octet_frames,
         uint64_t out_1523_to_max_octet_frames) :
      in_64_octet_frames_(in_64_octet_frames),
      in_65_to_127_octet_frames_(in_65_to_127_octet_frames),
      in_128_to_255_octet_frames_(in_128_to_255_octet_frames),
      in_256_to_511_octet_frames_(in_256_to_511_octet_frames),
      in_512_to_1023_octet_frames_(in_512_to_1023_octet_frames),
      in_1024_to_1522_octet_frames_(in_1024_to_1522_octet_frames),
      in_1523_to_max_octet_frames_(in_1523_to_max_octet_frames),
      out_64_octet_frames_(out_64_octet_frames),
      out_65_to_127_octet_frames_(out_65_to_127_octet_frames),
      out_128_to_255_octet_frames_(out_128_to_255_octet_frames),
      out_256_to_511_octet_frames_(out_256_to_511_octet_frames),
      out_512_to_1023_octet_frames_(out_512_to_1023_octet_frames),
      out_1024_to_1522_octet_frames_(out_1024_to_1522_octet_frames),
      out_1523_to_max_octet_frames_(out_1523_to_max_octet_frames) {
}

inline uint64_t
eth_phy_intf_bin_counters_t::in_64_octet_frames() const {
   return in_64_octet_frames_;
}

inline uint64_t
eth_phy_intf_bin_counters_t::in_65_to_127_octet_frames() const {
   return in_65_to_127_octet_frames_;
}

inline uint64_t
eth_phy_intf_bin_counters_t::in_128_to_255_octet_frames() const {
   return in_128_to_255_octet_frames_;
}

inline uint64_t
eth_phy_intf_bin_counters_t::in_256_to_511_octet_frames() const {
   return in_256_to_511_octet_frames_;
}

inline uint64_t
eth_phy_intf_bin_counters_t::in_512_to_1023_octet_frames() const {
   return in_512_to_1023_octet_frames_;
}

inline uint64_t
eth_phy_intf_bin_counters_t::in_1024_to_1522_octet_frames() const {
   return in_1024_to_1522_octet_frames_;
}

inline uint64_t
eth_phy_intf_bin_counters_t::in_1523_to_max_octet_frames() const {
   return in_1523_to_max_octet_frames_;
}

inline uint64_t
eth_phy_intf_bin_counters_t::out_64_octet_frames() const {
   return out_64_octet_frames_;
}

inline uint64_t
eth_phy_intf_bin_counters_t::out_65_to_127_octet_frames() const {
   return out_65_to_127_octet_frames_;
}

inline uint64_t
eth_phy_intf_bin_counters_t::out_128_to_255_octet_frames() const {
   return out_128_to_255_octet_frames_;
}

inline uint64_t
eth_phy_intf_bin_counters_t::out_256_to_511_octet_frames() const {
   return out_256_to_511_octet_frames_;
}

inline uint64_t
eth_phy_intf_bin_counters_t::out_512_to_1023_octet_frames() const {
   return out_512_to_1023_octet_frames_;
}

inline uint64_t
eth_phy_intf_bin_counters_t::out_1024_to_1522_octet_frames() const {
   return out_1024_to_1522_octet_frames_;
}

inline uint64_t
eth_phy_intf_bin_counters_t::out_1523_to_max_octet_frames() const {
   return out_1523_to_max_octet_frames_;
}

inline bool
eth_phy_intf_bin_counters_t::operator==(eth_phy_intf_bin_counters_t const & other)
       const {
   return in_64_octet_frames_ == other.in_64_octet_frames_ &&
          in_65_to_127_octet_frames_ == other.in_65_to_127_octet_frames_ &&
          in_128_to_255_octet_frames_ == other.in_128_to_255_octet_frames_ &&
          in_256_to_511_octet_frames_ == other.in_256_to_511_octet_frames_ &&
          in_512_to_1023_octet_frames_ == other.in_512_to_1023_octet_frames_ &&
          in_1024_to_1522_octet_frames_ == other.in_1024_to_1522_octet_frames_ &&
          in_1523_to_max_octet_frames_ == other.in_1523_to_max_octet_frames_ &&
          out_64_octet_frames_ == other.out_64_octet_frames_ &&
          out_65_to_127_octet_frames_ == other.out_65_to_127_octet_frames_ &&
          out_128_to_255_octet_frames_ == other.out_128_to_255_octet_frames_ &&
          out_256_to_511_octet_frames_ == other.out_256_to_511_octet_frames_ &&
          out_512_to_1023_octet_frames_ == other.out_512_to_1023_octet_frames_ &&
          out_1024_to_1522_octet_frames_ == other.out_1024_to_1522_octet_frames_ &&
          out_1523_to_max_octet_frames_ == other.out_1523_to_max_octet_frames_;
}

inline bool
eth_phy_intf_bin_counters_t::operator!=(eth_phy_intf_bin_counters_t const & other)
       const {
   return !operator==(other);
}

inline uint32_t
eth_phy_intf_bin_counters_t::hash() const {
   uint32_t ret = 0;
   ret = hash_mix::mix((uint8_t *)&in_64_octet_frames_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&in_65_to_127_octet_frames_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&in_128_to_255_octet_frames_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&in_256_to_511_octet_frames_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&in_512_to_1023_octet_frames_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&in_1024_to_1522_octet_frames_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&in_1523_to_max_octet_frames_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&out_64_octet_frames_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&out_65_to_127_octet_frames_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&out_128_to_255_octet_frames_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&out_256_to_511_octet_frames_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&out_512_to_1023_octet_frames_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&out_1024_to_1522_octet_frames_,
              sizeof(uint64_t), ret);
   ret = hash_mix::mix((uint8_t *)&out_1523_to_max_octet_frames_,
              sizeof(uint64_t), ret);
   ret = hash_mix::final_mix(ret);
   return ret;
}

inline std::string
eth_phy_intf_bin_counters_t::to_string() const {
   std::ostringstream ss;
   ss << "eth_phy_intf_bin_counters_t(";
   ss << "in_64_octet_frames=" << in_64_octet_frames_;
   ss << ", in_65_to_127_octet_frames=" << in_65_to_127_octet_frames_;
   ss << ", in_128_to_255_octet_frames=" << in_128_to_255_octet_frames_;
   ss << ", in_256_to_511_octet_frames=" << in_256_to_511_octet_frames_;
   ss << ", in_512_to_1023_octet_frames=" << in_512_to_1023_octet_frames_;
   ss << ", in_1024_to_1522_octet_frames=" << in_1024_to_1522_octet_frames_;
   ss << ", in_1523_to_max_octet_frames=" << in_1523_to_max_octet_frames_;
   ss << ", out_64_octet_frames=" << out_64_octet_frames_;
   ss << ", out_65_to_127_octet_frames=" << out_65_to_127_octet_frames_;
   ss << ", out_128_to_255_octet_frames=" << out_128_to_255_octet_frames_;
   ss << ", out_256_to_511_octet_frames=" << out_256_to_511_octet_frames_;
   ss << ", out_512_to_1023_octet_frames=" << out_512_to_1023_octet_frames_;
   ss << ", out_1024_to_1522_octet_frames=" << out_1024_to_1522_octet_frames_;
   ss << ", out_1523_to_max_octet_frames=" << out_1523_to_max_octet_frames_;
   ss << ")";
   return ss.str();
}

inline std::ostream&
operator<<(std::ostream& os, const eth_phy_intf_bin_counters_t& obj) {
   os << obj.to_string();
   return os;
}


}

#endif // EOS_INLINE_TYPES_ETH_PHY_INTF_H
