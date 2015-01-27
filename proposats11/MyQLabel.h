#include <QLabel>

class MyQLabel : public QLabel
{
	Q_OBJECT

    private:
        bool barrera; // 1 aixecada, 0 altrament
        int numCotxes;
        int numCamions;
        int numMotos;
        int recaptacio;

	public:
		MyQLabel(QWidget *parent = 0);
        ~MyQLabel();

    public slots:
        void cotxe();
        void camio();
        void moto();
        void obert();
        void tancat();
        void unEuro();
        void quatreEuro();
};
