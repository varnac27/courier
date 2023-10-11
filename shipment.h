#ifndef shipment_h
#define shipment_h
class shipment
{
    private:
        int ship_id;
        char from_city[30];
        char to_city[30];
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
