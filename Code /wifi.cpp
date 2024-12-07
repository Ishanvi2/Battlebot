#include <WiFi.h>

const char* ssid = "your_wifi_network_name"; 
const char* password = "your_wifi_password"; 

void setup() {
    Serial.begin(115200);
    WiFi.begin(ssid, password);  
    while (WiFi.status() != WL_CONNECTED) { 
    delay(500); 
    Serial.print("."); 
    }
    Serial.println("Connected to WiFi");
    Serial.print("IP address: "); 
    Serial.println(WiFi.localIP()); 
}



void loop() {

  // Add your code here to interact with the ESP32 using its IP address from your PC

}