#include <QLineEdit>

class MyQLineEdit : public QLineEdit
{
    Q_OBJECT

    private:
        bool shift;

    public:
        MyQLineEdit(QWidget *parent = 0);
        ~MyQLineEdit();

    public slots:
        void A();
        void E();
        void I();
        void O();
        void U();
        void toggleShift();
};
