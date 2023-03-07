

void SetRelays(void)
{

  if (bitRead(relay, 0)) mcps[0].digitalWrite(8, HIGH);  else mcps[0].digitalWrite(8, LOW);
  if (bitRead(relay, 1)) mcps[0].digitalWrite(9, HIGH);  else mcps[0].digitalWrite(9, LOW);
  if (bitRead(relay, 2)) mcps[0].digitalWrite(10, HIGH); else mcps[0].digitalWrite(10, LOW);
  if (bitRead(relay, 3)) mcps[0].digitalWrite(11, HIGH); else mcps[0].digitalWrite(11, LOW);
  if (bitRead(relay, 4)) mcps[0].digitalWrite(12, HIGH); else mcps[0].digitalWrite(12, LOW);
  if (bitRead(relay, 5)) mcps[0].digitalWrite(13, HIGH); else mcps[0].digitalWrite(13, LOW);
  if (bitRead(relay, 6)) mcps[0].digitalWrite(14, HIGH); else mcps[0].digitalWrite(14, LOW);
  if (bitRead(relay, 7)) mcps[0].digitalWrite(15, HIGH); else mcps[0].digitalWrite(15, LOW);

if(NUMBER_OF_MCPS == 2){

  if (bitRead(relayHi, 0))  mcps[1].digitalWrite(8, HIGH); else  mcps[1].digitalWrite(8, LOW);
  if (bitRead(relayHi, 1))  mcps[1].digitalWrite(9, HIGH); else  mcps[1].digitalWrite(9, LOW);
  if (bitRead(relayHi, 2)) mcps[1].digitalWrite(10, HIGH); else mcps[1].digitalWrite(10, LOW);
  if (bitRead(relayHi, 3)) mcps[1].digitalWrite(11, HIGH); else mcps[1].digitalWrite(11, LOW);
  if (bitRead(relayHi, 4)) mcps[1].digitalWrite(12, HIGH); else mcps[1].digitalWrite(12, LOW);
  if (bitRead(relayHi, 5)) mcps[1].digitalWrite(13, HIGH); else mcps[1].digitalWrite(13, LOW);
  if (bitRead(relayHi, 6)) mcps[1].digitalWrite(14, HIGH); else mcps[1].digitalWrite(14, LOW);
  if (bitRead(relayHi, 7)) mcps[1].digitalWrite(15, HIGH); else mcps[1].digitalWrite(15, LOW);
}

}



void SetuTurnRelays(void)
{

}
