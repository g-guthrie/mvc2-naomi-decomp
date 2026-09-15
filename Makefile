PYTHON ?= python3

.PHONY: all test prepare verify report serve shc-smoke
all: test verify report

shc-smoke:
	$(PYTHON) tools/shc_smoke.py

test:
	$(PYTHON) -m unittest discover -s tests -v

prepare:
	$(PYTHON) tools/project.py prepare

verify:
	$(PYTHON) tools/project.py verify

report:
	$(PYTHON) tools/report.py

serve:
	$(PYTHON) -m http.server 8000 --bind 127.0.0.1 --directory docs
