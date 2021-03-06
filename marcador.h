#ifndef MARCADOR_H
#define MARCADOR_H

#include <QVariantMap>
#include <QMouseEvent>
#include <QUrl>
#include <QDebug>
#include <QFontMetrics>
#include <QStringList>
#include <hoverbutton.h>

extern QStringList verificarMarcador;

class marcador : public HoverButton {
	Q_OBJECT

public:
  marcador(QVariant);
  QVariantMap data;
  void mouseReleaseEvent(QMouseEvent *e);

signals:
	void goToUrl(QUrl);
	
};

#endif // MARCADOR_H