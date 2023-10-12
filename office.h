#ifndef office_h
#define office_h
class office
{
    private:
        int off_id;
        string off_name;
        string off_address;
        int off_phone;
    public:
        office();
        void addoffice();
        void searchoffice();
        void updateoffice();
        void deleteoffice();
        void getoffice();
};
#endif
