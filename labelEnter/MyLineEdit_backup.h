#include <QLineEdit>
#include <QKeyEvent>

class MyQLineEdit : public QLineEdit
{
	Q_OBJECT

	public:
		MyQLineEdit(QWidget *parent = 0);
        ~MyQLineEdit();

    private:
        void keyPressEvent(QKeyEvent * e);

    public slots:


    signals:
        void MyReturnPressed(QString str);
};
