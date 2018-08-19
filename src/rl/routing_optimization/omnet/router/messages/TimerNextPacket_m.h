//
// Generated file, do not edit! Created by nedtool 4.6 from messages/TimerNextPacket.msg.
//

#ifndef _TIMERNEXTPACKET_M_H_
#define _TIMERNEXTPACKET_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>messages/TimerNextPacket.msg:19</tt> by nedtool.
 * <pre>
 * //
 * // TODO generated message class
 * //
 * message TimerNextPacket
 * {
 *     int target;
 *     double lambda;
 * }
 * </pre>
 */
class TimerNextPacket : public ::cMessage
{
  protected:
    int target_var;
    double lambda_var;

  private:
    void copy(const TimerNextPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TimerNextPacket&);

  public:
    TimerNextPacket(const char *name=NULL, int kind=0);
    TimerNextPacket(const TimerNextPacket& other);
    virtual ~TimerNextPacket();
    TimerNextPacket& operator=(const TimerNextPacket& other);
    virtual TimerNextPacket *dup() const {return new TimerNextPacket(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual int getTarget() const;
    virtual void setTarget(int target);
    virtual double getLambda() const;
    virtual void setLambda(double lambda);
};

inline void doPacking(cCommBuffer *b, TimerNextPacket& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, TimerNextPacket& obj) {obj.parsimUnpack(b);}


#endif // ifndef _TIMERNEXTPACKET_M_H_
