#include "Relay.h"

/**
 * @brief Turns the relay on.
 * 
 */
void Relay::turnOn()
{
    m_currentState = true;
    digitalWrite(m_pinNumber, m_isActiveHigh);
}

/**
 * @brief Turns the relay off.
 * 
 */
void Relay::turnOff()
{
    digitalWrite(m_pinNumber, !m_isActiveHigh);
    m_currentState = false;
}

/**
 * @brief Toggles the relay (i.e. turns it off if it's currently on and turns it on if it's currently off)
 * 
 */
void Relay::toggle()
{
    digitalWrite(m_pinNumber, m_currentState != m_isActiveHigh)
    m_currentState = !m_currentState;
}