#include "pixelatormenudialog.h"

#include <cassert>
#include <iostream>

int ribi::PixelatorMenuDialog::ExecuteSpecific(const std::vector<std::string>& argv) noexcept
{
  const int argc = static_cast<int>(argv.size());
  if (argc == 1)
  {
    std::cout << GetHelp() << '\n';
    return 0;
  }
  assert(!"TODO");
  return 0;
}

ribi::About ribi::PixelatorMenuDialog::GetAbout() const noexcept
{
  About a(
    "Richel Bilderbeek",
    "Pixelator",
    "tool to pixelate image",
    "the 28th of November 2013",
    "2008-2015",
    "http://www.richelbilderbeek.nl/ToolPixelator.htm",
    GetVersion(),
    GetVersionHistory()
  );
  return a;
}

ribi::Help ribi::PixelatorMenuDialog::GetHelp() const noexcept
{
  return ribi::Help(
    this->GetAbout().GetFileTitle(),
    this->GetAbout().GetFileDescription(),
    {

    },
    {

    }
  );
}

std::string ribi::PixelatorMenuDialog::GetVersion() const noexcept
{
  return "3.0";
}

std::vector<std::string> ribi::PixelatorMenuDialog::GetVersionHistory() const noexcept
{
  return {
    "2008-03-01: version 1.0: initial Windows-only version",
    "2013-11-28: version 2.0: port to Qt",
    "2015-11-20: version 3.0: moved to own GitHub"
  };
}
