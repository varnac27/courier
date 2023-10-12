#ifndef shipment_h
#define shipment_h
class shipment
{
    private:
        int ship_id;
        string from_city;
        string to_city;
        float weight;
        int date;
    public:
        void addshipment();
        void getshipment();
        void updateshipment();
        int searchshipment(int );
        int getdate();
        int getid();
        void setshipmentid(int );
};
#endif
