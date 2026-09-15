PYTHON ?= python3

.PHONY: all test prepare verify report serve shc shc-check shc-smoke
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

shc-check:
	$(PYTHON) tools/hitachi.py check

shc:
	$(PYTHON) tools/hitachi.py compile --source "$(SOURCE)"

serve:
	$(PYTHON) -m http.server 8000 --bind 127.0.0.1 --directory docs
