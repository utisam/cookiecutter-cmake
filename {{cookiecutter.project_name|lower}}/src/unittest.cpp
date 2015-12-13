#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE({{cookiecutter.project_name}})

BOOST_AUTO_TEST_CASE({{cookiecutter.project_name}}_test) {
    BOOST_CHECK(true);
}

BOOST_AUTO_TEST_SUITE_END()
