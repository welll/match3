/*
 * file generated by gmock: iwindow_mock.hpp
 */
#ifndef IWINDOW_MOCK_HPP
#define IWINDOW_MOCK_HPP

#include <gmock/gmock.h>
#include "iwindow.hpp"

namespace game {
namespace gui {

class iwindow_mock : public iwindow
{
public:
    virtual ~iwindow_mock();

    MOCK_CONST_METHOD1(load_image, boost::shared_ptr<SDL_Texture>(const std::string &));
    MOCK_CONST_METHOD4(render_text, boost::shared_ptr<SDL_Texture>(const std::string &, const std::string &, SDL_Color, int));
    MOCK_METHOD3(draw, void(boost::shared_ptr<SDL_Texture>, int, int));
    MOCK_METHOD0(clear, void());
    MOCK_METHOD0(render, void());
    MOCK_METHOD0(quit, void());
};

} // namespace game
} // namespace gui

#endif // IWINDOW_MOCK_HPP

