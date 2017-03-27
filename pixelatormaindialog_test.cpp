#include "pixelatormaindialog.h"

void ribi::PixelatorMainDialog::Test() noexcept
{
  QPixmap source(":/pixelator/images/PixelatorTest.png");
  assert(!source.isNull());
  assert(source.width() > 0);
  assert(source.height() > 0);
  const int max = source.width() + 1; //Be nasty
  for (int pixel_size = 1; pixel_size != max; ++pixel_size)
  {
    const QPixmap target {
      PixelatorMainDialog::DoPixelate(source,pixel_size)
    };
    assert(!target.isNull());
    assert(target.width() > 0);
    assert(target.height() > 0);
  }
}
