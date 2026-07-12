# Energy Performance Monitoring System

A modular C++ application for industrial energy-performance monitoring, data validation, anomaly detection, KPI calculation, and operational reporting.

This public portfolio project modernises concepts from an energy-monitoring system originally developed during industrial engineering work using historian data, C++, and Excel VBA.

The repository demonstrates how operational data can be transformed into validated energy-performance indicators and actionable engineering insights.

---

## Problem

Industrial energy monitoring often depends on manually maintained spreadsheets, fragmented historian extracts, and delayed reporting.

These limitations can result in:

- inconsistent data quality
- delayed detection of abnormal energy performance
- limited traceability of KPI calculations
- difficulty distinguishing process variation from instrumentation issues
- slow generation of operational reports

The objective of this project is to demonstrate a structured software approach for processing, validating, analysing, and reporting industrial energy-performance data.

---

## Solution

The application implements a modular monitoring workflow:

```text
CSV / Historian Data
        |
        v
Data Ingestion
        |
        v
Data Validation
        |
        v
Energy Index Calculation
        |
        v
Statistical Analysis
        |
        v
Anomaly Detection
        |
        v
KPI Reporting
