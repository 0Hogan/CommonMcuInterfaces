#include "Arduino.h"

#include <cstdint>

#ifndef RELAY_H
#define RELAY_H

class Relay
{
  public:
    Relay(const uint8_t pinNumber, const bool isActiveHigh=true) : m_pinNumber(pinNumber), m_isActiveHigh(isActiveHigh) { turnOff(); };

    void turnOn();
    void turnOff();
    void toggle();
    
    /**
     * @brief Get the current state of the relay.
     * 
     * @returns True if the relay is on, false otherwise.
     */
    bool getState() const { return m_currentState };

  private:
    uint8_t m_pinNumber; ///< The number of the pin used to control the relay.
    bool m_isActiveHigh; ///< Whether the relay is "on" when the pin is set to "high"
    bool m_currentState; ///< Whether the relay is currently on.
};

#endif // RELAY_H