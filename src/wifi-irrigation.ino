// This #include statement was automatically added by the Particle IDE.
#include <RelayShield.h>
// create an instance of the RelayShield library for the valves
RelayShield valveRelays;

// select the u.FL antenna
STARTUP(WiFi.selectAntenna(ANT_EXTERNAL));

// create function and an array to track relay state
void setup()
{
  valveRelays.begin();
  Serial.begin(9600);
  Time.zone(-7);
}

void loop()
{
  Serial.print("hello");
  if (Time.hour() == 8)
  {
    relayOn();
  }
  else if (Time.hour() == 10)
  {
    relayOff();
  }
}

// definin relayOn method
int relayOn()
{
  valveRelays.on(1);
  valveRelays.on(2);
  valveRelays.on(3);
  valveRelays.on(4);

  return 1;
}

// define relayOff method
int relayOff()
{
  valveRelays.off(1);
  valveRelays.off(2);
  valveRelays.off(3);
  valveRelays.off(4);

  return 1;
}