#ifndef PIXELATORMENUDIALOG_H
#define PIXELATORMENUDIALOG_H

#include "menudialog.h"

namespace ribi {

///GUI independent pixelator menu dialog
struct PixelatorMenuDialog final : public MenuDialog
{
  About GetAbout() const noexcept override;
  Help GetHelp() const noexcept override;
  std::string GetVersion() const noexcept override;
  std::vector<std::string> GetVersionHistory() const noexcept override;

  private:
  int ExecuteSpecific(const std::vector<std::string>& argv) noexcept override;
};

} //~namespace ribi

#endif // PIXELATORMENUDIALOG_H
