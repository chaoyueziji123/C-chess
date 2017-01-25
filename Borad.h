#ifndef BORAD_H
#define BORAD_H

#include <QWidget>
#include "Stone.h"
class Borad : public QWidget
{
    Q_OBJECT
public:
    int selectid=-1;
    void paintEvent(QPaintEvent *);
    explicit Borad(QWidget *parent = 0);
    ~Borad();
    Stone _s[32];
    int _r;
    void drawStone(QPainter& painter,int id);
    void mouseReleaseEvent(QMouseEvent *ev);
    QPoint center(int row,int col);
    QPoint center(int id);
    bool getRowCol(QPoint pt,int& row,int& col);
    bool canMove(int moveid, int row, int col, int killid);
    bool canMove1(int moveid, int row, int col, int killid);
    bool canMove2(int moveid, int row, int col, int killid);
    bool canMove3(int moveid, int row, int col, int killid);
    bool canMove4(int moveid, int row, int col, int killid);
    bool canMove5(int moveid, int row, int col, int killid);
    bool canMove6(int moveid, int row, int col, int killid);
    bool canMove7(int moveid, int row, int col, int killid);

signals:

public slots:
};

#endif // BORAD_H
