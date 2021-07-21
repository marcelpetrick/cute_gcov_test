# cute_gcov_test
Test project to follow along a tutorial of how to integrate gcov properly to a Qt project.
Based on <https://kelvinsp.medium.com/generating-code-coverage-with-qt-5-and-gcov-on-mac-os-4999857f4676>

## How to?
* clone, build (with qmake or QtCreator) and check if the unit-tests run successfully
* execute ```./scripts/runCoverage.sh``` to get some lcov-output as html for further evaluation of the coverage (hint: maybe adapt the path to the build-directory; because it is based on the used Qt-version)
