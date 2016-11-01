#include <QObject>
#include <QMap>
#include <QTimer>
#include "myjoysticklibrary.h"
#include "mode.h"
#include "drive.h"
#include "manip.h"
#include "rotate.h"
#define MAX 4
#define DRIVE 1
#define MANIP 2
#define ROTATE 3

class Joystick {
  private:
  Mode* mode[MAX];
  Mode* active_mode;
  Mode* previous_mode;
  QTimer timer;
  Qmap <Qstring,int> current_axis;
  MyJoysickLibrary* myLibrary;
  sender tcp_object;

  public:
  void update_modes();
  void update_buttons();
  void tcp_send();
  
  public slots:
  void update_states();
  



};
