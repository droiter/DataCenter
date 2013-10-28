//
// Generated file, do not edit! Created by opp_msgc 4.3 from model/packets/DCN_UDPPacket.msg.
//

#ifndef _DCN_UDPPACKET_M_H_
#define _DCN_UDPPACKET_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0403
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
#include "DCN_IPPacket.h"

#define UDP_OVERHEAD 			(IP_OVERHEAD + UDP_HEADER_SIZE)
#define MAX_UDP_PAYLOAD			(ETHER_MAX_SEG_SIZE - UDP_OVERHEAD)
// }}



/**
 * Class generated from <tt>model/packets/DCN_UDPPacket.msg</tt> by opp_msgc.
 * <pre>
 * packet DCN_UDPPacket extends DCN_IPPacket
 * {
 *     @customize(true);
 *     kind enum(DCN_EthPacketType) = DCN_UDP_PACKET;
 * 	transportProtocol = IP_PROT_UDP;
 * }
 * </pre>
 *
 * DCN_UDPPacket_Base is only useful if it gets subclassed, and DCN_UDPPacket is derived from it.
 * The minimum code to be written for DCN_UDPPacket is the following:
 *
 * <pre>
 * class DCN_UDPPacket : public DCN_UDPPacket_Base
 * {
 *   private:
 *     void copy(const DCN_UDPPacket& other) { ... }

 *   public:
 *     DCN_UDPPacket(const char *name=NULL, int kind=0) : DCN_UDPPacket_Base(name,kind) {}
 *     DCN_UDPPacket(const DCN_UDPPacket& other) : DCN_UDPPacket_Base(other) {copy(other);}
 *     DCN_UDPPacket& operator=(const DCN_UDPPacket& other) {if (this==&other) return *this; DCN_UDPPacket_Base::operator=(other); copy(other); return *this;}
 *     virtual DCN_UDPPacket *dup() const {return new DCN_UDPPacket(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from DCN_UDPPacket_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(DCN_UDPPacket);
 * </pre>
 */
class DCN_UDPPacket_Base : public ::DCN_IPPacket
{
  protected:

  private:
    void copy(const DCN_UDPPacket_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const DCN_UDPPacket_Base&);
    // make constructors protected to avoid instantiation
    DCN_UDPPacket_Base(const char *name=NULL, int kind=0);
    DCN_UDPPacket_Base(const DCN_UDPPacket_Base& other);
    // make assignment operator protected to force the user override it
    DCN_UDPPacket_Base& operator=(const DCN_UDPPacket_Base& other);

  public:
    virtual ~DCN_UDPPacket_Base();
    virtual DCN_UDPPacket_Base *dup() const {throw cRuntimeError("You forgot to manually add a dup() function to class DCN_UDPPacket");}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
};


#endif // _DCN_UDPPACKET_M_H_