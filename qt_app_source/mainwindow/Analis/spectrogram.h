#ifndef SPECTROGRAM_H
#define SPECTROGRAM_H
#include <QPixmap>
#include <QDialog>
#include <QBoxLayout>
#include <QScrollArea>
#include <QButtonGroup>
#include <mainwindow/Widgets/checkboxforchannels.h>
#include <QPushButton>
#include <QImage>
#include <QLineEdit>
#include <canalofsignal/canalofsignal.h>
#include <complex>

class MainWindow;

class Spectrogram : public QDialog
{
public:
    Spectrogram();
    Spectrogram( MainWindow *m_wind );

    MainWindow *main_window;
    QBoxLayout *box_layout;
    QScrollArea *scroll_area;
    QBoxLayout *scroll_layout;
    QWidget *scroll_widget;
    QButtonGroup *button_group;
    std::vector<CheckBoxForChannels*> list_of_checkbox;
    QPushButton *action_button;
    QLineEdit *width_of_image;
    QLineEdit *height_of_image;

    CanalOfSignal chosen_source_channel;


    int Ns = 0;
    int K = 0;
    double section_base = 0;
    double coeff_n = 1.5;
    int section_n = 0;
    int NN;
    int L;
    double Amax = 0;
    double Coeff = 0;

    std::vector<int*> gray_pallete;
    std::vector<double*> spectrogramm_values;
    std::vector<std::complex<double>> dpf_values;
    std::vector<double> amplitude_spectrum_values;

    QImage *spectrogram;
    void createSpectrogram();

};

#endif // SPECTROGRAM_H
