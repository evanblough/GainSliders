#ifndef SLIDERLAYOUT_H
#define SLIDERLAYOUT_H

#include <QObject>
#include <QLayout>

class SliderLayout : public QObject
{
    Q_OBJECT
public:
    SliderLayout(QObject *parent = nullptr);
    SliderLayout(QString label_name, QString min, QString max, QWidget * parent);

    QBoxLayout *getLayout() const;
    void setLayout(QBoxLayout *value);

signals:

public slots:

private:
    QString label_name, min, max;
    QBoxLayout* layout;
    void make_layout();
};

#endif // SLIDERLAYOUT_H
