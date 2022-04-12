#ifndef BASEWAVEFORM_H
#define BASEWAVEFORM_H
#include <QWidget>
#include <canalofsignal/canalofsignal.h>
#include <utility>
#include <vector>
#include <qwt_plot.h>
#include <QMouseEvent>

#include <canalofsignal/canalofsignal.h>

class BaseWaveForm : public QwtPlot
{

private:
    std::vector< std::pair<double, double> > coordinates;
public:
    std::vector< std::pair<double, double> > Coordinates();
    CanalOfSignal *foundation;
    BaseWaveForm();
    void createSimplePlot(CanalOfSignal &base, const double &period_of_tick);
    void clearPlot();
    void createCoordinates(CanalOfSignal &base, const double &period_of_tick);

protected:
    virtual void mousePressEvent(QMouseEvent* event);

};

#endif // BASEWAVEFORM_H
