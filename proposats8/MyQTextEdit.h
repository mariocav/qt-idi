#include <QTextEdit>

class MyQTextEdit : public QTextEdit
{
	Q_OBJECT

    private:
        QString name;
        int quantity;

	public:
		MyQTextEdit(QWidget *parent = 0);
        ~MyQTextEdit();

    public slots:
        void setName(QString str);
        void setQuantity(int qty);
        void addItem();
};
