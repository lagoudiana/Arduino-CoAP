#ifndef COAP_SENSOR_H
#define COAP_SENSOR_H

class CoapSensor
{
   public:
   virtual coap_status_t callback( uint8_t method, uint8_t* input_data, size_t input_data_len, uint8_t* output_data, size_t* output_data_len, queries_t queries);
   
   virtual uint8_t method();
   
   virtual String name();
   
   virtual bool fast();
   
   virtual uint16_t notify_time();
   
   virtual uint8_t content_type();
      
};

#endif
