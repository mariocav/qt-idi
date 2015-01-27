#include <QLineEdit>
#include <QKeyEvent>

class MyQLineEdit : public QLineEdit
{
    Q_OBJECT

    private:
        QString paraula;
        QString paraulaOculta;
        int vidas;
        bool fi;
        void init();

    public:
        MyQLineEdit(QWidget *parent = 0);
        ~MyQLineEdit();

    private:
        void keyPressEvent(QKeyEvent * e);

    public slots:
        void reset();

    signals:
        void numVidas(int n);
        void parOculta(QString);
};
