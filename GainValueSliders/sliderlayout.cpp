#include "sliderlayout.h"
#include "stdio.h"
#include <QPushButton>

SliderLayout::SliderLayout(QObject *parent) : QObject(parent)
{
    this->label_name = "hello";
    this->min = "0";
    this->max = "100";
    make_layout();
}

SliderLayout::SliderLayout(QString label_name, QString min, QString max, QWidget* parent){

    //Initilize instance varibables
    this->label_name = label_name;
    this->min = min;
    this->max = max;
    QByteArray ba = this->label_name.toLocal8Bit();
    printf("label_name: %s\n", ba.data());
    ba = this->min.toLocal8Bit();
    printf("min: %s\n", ba.data());
    ba = this->max.toLocal8Bit();
    printf("max: %s\n", ba.data());
    this->layout = new QBoxLayout(QBoxLayout::TopToBottom);
    //Create Layout
    make_layout();


}

QBoxLayout *SliderLayout::getLayout() const
{
    return layout;
}

void SliderLayout::setLayout(QBoxLayout *value)
{
    layout = value;
}

void SliderLayout::make_layout(){
    QPushButton* pb = new QPushButton("I work");
    this->layout->addWidget(pb);
}
