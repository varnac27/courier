#ifndef office_h
#define office_h
class office
{
    private:
        int off_id;
        char off_name[30];
        char off_address[30];
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
